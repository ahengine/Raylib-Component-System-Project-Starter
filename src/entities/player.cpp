#include "headers/player.h"
#include "../core/headers/sprite.h"

Player::Player()
{
    // Sprite spr = Sprite();
    // spr.SetTexture("../assets/player.jpg");
    // AddComponent(&spr);
}

Player::~Player()
{
}

void Player::Update()
{
    Object::Update();
}

void Player::Draw()
{
    Object::Draw();
}