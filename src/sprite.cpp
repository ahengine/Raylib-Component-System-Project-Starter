#include <raylib.h>
#include "sprite.h"
#include <iostream>

Sprite::Sprite()
{
    SetColor(WHITE);
    float xPos = static_cast<float>(GetScreenWidth())/2.0;
    float yPos = static_cast<float>(GetScreenHeight())/2.0;
    SetPosition(Vector2{xPos,yPos});
}

Sprite::~Sprite()
{

}

void Sprite::Awake()
{
    
}

void Sprite::Update()
{
    
}

void Sprite::Draw() 
{
   if(spriteTexture.id > 0)
        DrawTextureRec(spriteTexture, rect, position, color);
}

void Sprite::SetTexture(const char *sprPath)
{
    spriteTexture = LoadTexture(sprPath);
    rect = { 0, 0, (float)spriteTexture.width, (float)spriteTexture.height };
}

void Sprite::SetColor(Color color)
{
    this->color = color;
}

void Sprite::SetPosition(Vector2 position)
{
    this->position = position;
}

void Sprite::SetScale(Vector2 scale)
{
    if(spriteTexture.id > 0)
        rect = { 0, 0, (float)spriteTexture.width * scale.x, (float)spriteTexture.height * scale.y };
}