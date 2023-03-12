#pragma once



#include <memory>
#include <glm/vec2.hpp>


#include "Game_Object.h"


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
//  Player Tank class
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
namespace RenderEngine
{
	class Animated_Sprite;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Player_Tank : public Game_Object
{
public:
	//================================================================================================================================================================
	Player_Tank(std::shared_ptr<RenderEngine::Animated_Sprite> sprite,
			    const float velocity,	
				const glm::vec2 position,
				const glm::vec2 size);
	//================================================================================================================================================================

	enum class EOrientation : unsigned char					/* Orientation Movement Enum */

	{
		Top,
		Bottom,
		Left,
		Right
	};

	//============================================================================================================================================================
	/* override */
	void Render() const override;							/* Render Player Tank */
	void Update(const uint64_t delta_seconds) override;		/* Update Animation Player Sprite */
	/* */
	void Set_Orientation(const EOrientation orientation); 	/* Setter Orientation Player on game view*/
	void Move_Player(const bool move);						/* Move Player Method*/
	//============================================================================================================================================================

private:
	//================================================================================================================================================================
	bool Move;													/* */
	float Velocity;												/* Speed velocity float */
	glm::vec2 Move_Offset;										/* Vector Movement offset */
	EOrientation Orientation;									/* Orientation Enum */
	std::shared_ptr<RenderEngine::Animated_Sprite> Tank_Sprite;	/* Sprte pointer*/
	//================================================================================================================================================================


};
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------