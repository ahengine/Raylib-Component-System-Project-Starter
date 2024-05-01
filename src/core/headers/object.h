#pragma once

#ifndef OBJECT_H
#define OBJECT_H

#include <raylib.h>
#include "sprite.h"
#include "component.h"
#include <vector>
#include <algorithm> 
#include <memory>    // For std::shared_ptr

class Object 
{
    public:
        Object();
        ~Object();
        virtual void Update();
        virtual void Draw();
         std::vector<Component*> components;

        template <typename T>
        T* AddComponent(T* component);

        template <typename T>
        T* GetComponent();

        template <typename T>
        void RemoveComponent();
        unsigned long long id;
};

#endif