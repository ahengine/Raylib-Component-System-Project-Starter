#ifndef ENTITY_H
#define ENTITY_H

#include "object.h"
#include "transform.h"

class Entity : public Object
{
    protected:
     Sprite spr;
     TransformComp tr;

    public:
        Entity();
        ~Entity();
        virtual void SetPosition(Vector2 position);
        virtual void SetScale(Vector2 scale);
        virtual void SetRotation(float rotation);
        void Update() override;
        void Draw() override;
};

#endif