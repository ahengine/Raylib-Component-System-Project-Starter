#ifndef SPRITE_H
#define SPRITE_H


#include <raylib.h>
#include "component.h"

class Sprite : public Component
{
    private:
        Texture2D spriteTexture;
        Rectangle rect;
        Color color;
        Vector2 position;

    public:
        Sprite();
        ~Sprite();
        void Awake() override;
        void Update() override;
        void Draw() override;
        void SetTexture(const char *sprPath);
        void SetColor(Color color);
        void SetPosition(Vector2 position);
        void SetScale(Vector2 scale);
        
};

#endif