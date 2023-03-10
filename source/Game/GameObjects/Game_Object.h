#pragma once 

#include <glm/vec2.hpp>

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
//  Game_Object
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Game_Object
{
public:
	//================================================================================================================================================================
	virtual ~Game_Object();
	Game_Object(const glm::vec2& position, const glm::vec2& size, const float rotation, const float layer);
	//================================================================================================================================================================



	//================================================================================================================================================================
	virtual void Render() const = 0;
	virtual void Update(const uint64_t delta) {};
	//================================================================================================================================================================



protected:
	//================================================================================================================================================================
	glm::vec2 Position;
	glm::vec2 Size;
	float Rotation;
	float Layer;
	//================================================================================================================================================================

};
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
