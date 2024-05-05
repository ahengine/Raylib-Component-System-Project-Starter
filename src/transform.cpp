#include <raylib.h>
#include "transform.h"

TransformComp::TransformComp() {}

TransformComp::~TransformComp() {}

void TransformComp::Awake() {}

void TransformComp::Update() {}

void TransformComp::Draw() {}

void TransformComp::SetRotation(float rotation)
{
    this->rotation = rotation;
}

void TransformComp::SetPosition(Vector2 position)
{
    this->position = position;
}


void TransformComp::SetScale(Vector2 scale)
{
    this->scale = scale;
}

Vector2 TransformComp::GetPosition()
{
    return this->position;
}
Vector2 TransformComp::GetScale()
{
    return this->scale;
}
float TransformComp::GetRotation()
{
    return this->rotation;
}