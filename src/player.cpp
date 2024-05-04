#include "player.h"
#include "sprite.h"

Player::Player()
{
    Sprite* spr = new Sprite();
    spr->SetTexture("../assets/player.jpg");
    AddComponent(spr);
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