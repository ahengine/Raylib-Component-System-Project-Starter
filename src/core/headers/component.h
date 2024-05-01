#pragma once

class Component 
{
    public:
        Component();
        ~Component();
        virtual void Awake();
        virtual void Update();
        virtual void Draw();
        unsigned long long objectOwnerId;
};