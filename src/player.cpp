#include "player.h"
#include "transform.h"

Player::Player()
{
    spr.SetTexture("player.png");
    SetScale(Vector2{.5, .5});
}

Player::~Player() {}

void Player::Update()
{
    float deltaTime = GetFrameTime();

    Vector2 pos = tr.GetPosition();

    if (IsKeyDown(KEY_RIGHT))
        pos.x += moveSpeed * deltaTime;

    if (IsKeyDown(KEY_LEFT))
        pos.x -= moveSpeed * deltaTime;

    SetPosition(pos);
    Entity::Update();
}

void Player::Draw()
{
    Entity::Draw();
}