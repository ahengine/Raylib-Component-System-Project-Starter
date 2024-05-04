#include <raylib.h>
#include "./headers/sprite.h"

Sprite::Sprite()
{

};

Sprite::~Sprite()
{

};

void Sprite::Update()
{
    
}


void Sprite::Draw() 
{
   if(spriteTexture.id > 0)
        DrawTextureRec(spriteTexture, rect, position, color);
};

void Sprite::SetTexture(const char *sprPath)
{
    spriteTexture = LoadTexture(sprPath);
    rect = { 0, 0, (float)spriteTexture.width, (float)spriteTexture.height };
};

void Sprite::SetColor(Color color)
{
    this->color = color;
}

void Sprite::SetPosition(Vector2 position)
{
    this->position = position;
}