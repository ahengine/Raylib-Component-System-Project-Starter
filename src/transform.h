#ifndef TRANSFORM_H
#define TRANSFORM_H


#include <raylib.h>
#include "component.h"

class TransformComp : public Component
{
    private:
        Vector2 position;
        float rotation;
        Vector2 scale;

    public:
        TransformComp();
        ~TransformComp();
        void Awake() override;
        void Update() override;
        void Draw() override;
        void SetPosition(Vector2 position);
        void SetScale(Vector2 scale);
        void SetRotation(float rotation);   
        Vector2 GetPosition();
        Vector2 GetScale();
        float GetRotation();   
};

#endif