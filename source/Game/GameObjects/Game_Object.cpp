#include "Game_Object.h"

Game_Object::~Game_Object()
{
}

Game_Object::Game_Object(const glm::vec2& position, const glm::vec2& size, const float rotation)
:Position(position), Size(size), Rotation(rotation)
{
}