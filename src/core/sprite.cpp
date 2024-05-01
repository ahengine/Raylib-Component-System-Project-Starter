#include <raylib.h>
#include "./headers/sprite.h"

void Sprite::Draw(Vector2 position) 
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