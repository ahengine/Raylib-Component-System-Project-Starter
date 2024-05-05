#ifndef SPRITE_H
#define SPRITE_H


#include <raylib.h>
#include "component.h"

class Collision : public Component
{
    private:
        Vector2 position;

    public:
        Collision();
        ~Collision();
        void Awake() override;
        void Update() override;
        void Draw() override;
        void SetPosition(Vector2 position);
        Vector2 GetPosition();
        virtual bool CheckCollision(const Collision& other) const = 0;
};

#endif