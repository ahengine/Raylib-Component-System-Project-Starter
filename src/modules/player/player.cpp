#include "../../core/headers/object.h"
#include "player.h"
#include "../../core/headers/sprite.h"

Player::Player() : Object()
{
    Sprite* spr = new Sprite();
    spr->SetTexture("player.jpg");
    AddComponent(spr);
}