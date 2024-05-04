#ifndef OBJECT_H
#define OBJECT_H

#include <raylib.h>
#include "sprite.h"
#include "component.h"
#include <vector>
#include <algorithm> 

class Object 
{
    public:
        Object();
        ~Object();
        virtual void Update();
        virtual void Draw();
         std::vector<Component*> components;

        template <class T>
        T* AddComponent(T* component);

        template <class T>
        T* GetComponent();

        template <class T>
        void RemoveComponent();
        unsigned long long id;
};

#endif