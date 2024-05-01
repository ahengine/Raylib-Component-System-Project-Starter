#pragma once

#include <raylib.h>
#include "component.h"

class Sprite : public Component
{
    public:
        Sprite();
        ~Sprite();
        void Draw(Vector2 pos);
        void SetTexture(const char *sprPath);
        void SetColor(Color color);
        Texture2D spriteTexture;
        Rectangle rect;
        Color color;
};