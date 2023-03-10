#pragma once 

#include <glad\glad.h>
#include <string>
#include "glm/mat4x4.hpp"


//----------------------------------------------------------------------------------------------------------------------------------------------------------------
//  Renderer::Shader_Program
//----------------------------------------------------------------------------------------------------------------------------------------------------------------
namespace RenderEngine
{
	class Shader_Program
	{
	public:
		//========================================================================================================================================================
		// Constructors and Destructors
		~Shader_Program();

		/* Use the actual constructor for this class */
		Shader_Program(const std::string& vertex_shader, const std::string& fragment_shader);
		Shader_Program& operator=(Shader_Program&& shader_program) noexcept;
		Shader_Program(Shader_Program&& shader_program) noexcept;

		/* It is forbidden to use a constructor without parameters and a constructor with a parameter of this class*/
		Shader_Program() = delete;
		Shader_Program(Shader_Program&) = delete;
		Shader_Program& operator=(const Shader_Program&) = delete;
		//========================================================================================================================================================


		//========================================================================================================================================================
		// Public Methods
		/* is shader complited created */
		bool Is_Compiled() const { return bIs_Compiled; }

		/* Use shaders method */
		void Use_Shader() const;

		/* Sets the shader uniform int */
		void Set_Int(const std::string& name, const GLint value);

		/* Sets the shader uniform float */
		void Set_Float(const std::string& name, const GLfloat value);

		/* Set Matrix for Screen Space*/
		void Set_Matrix4(const std::string& name, const glm::mat4& matrix);
		//========================================================================================================================================================

	private:
		//========================================================================================================================================================
		// Private Methods

		/* Creating shader method */
		bool Create_Shader(const std::string& source, const GLenum shader_type, GLuint& shader_id);
		//========================================================================================================================================================


		//========================================================================================================================================================
		// Private Variables
		bool bIs_Compiled;
		GLuint ID;
	};
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------
