#include "entity.h"
#include "transform.h"

Entity::Entity()
{
    // Add Sprite
    spr = Sprite();
    spr.SetColor(WHITE);
    AddComponent(&spr);
    
    // Add Transform
    tr = TransformComp();
    tr.SetScale(Vector2{1,1});
    AddComponent(&tr);

    spr.SetScale(tr.GetScale());
}

Entity::~Entity() {}

void Entity::Update()
{
    Object::Update();
}

void Entity::Draw()
{
    Object::Draw();
}

void Entity::SetPosition(Vector2 position) 
{
    tr.SetPosition(position);
    spr.SetPosition(tr.GetPosition());
}
void Entity::SetScale(Vector2 scale) 
{
    tr.SetScale(scale);
    spr.SetScale(tr.GetScale());
}
void Entity::SetRotation(float rotation) 
{
    tr.SetRotation(rotation);
}