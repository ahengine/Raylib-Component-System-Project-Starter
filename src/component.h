#ifndef COMPONENT_H
#define COMPONENT_H

class Component 
{
    public:
        Component();
        ~Component();
        virtual void Awake();
        //virtual void Start();
        virtual void Update();
        virtual void Draw();
        unsigned long long objectOwnerId;
};

#endif