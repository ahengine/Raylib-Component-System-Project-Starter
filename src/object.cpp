#include <raylib.h>
#include "object.h"
#include "sprite.h"
#include "idgenerator.h"
#include <list>
#include <memory>
#include <iostream>

Object::Object() {
    id = IdGenerator::generateUniqueID();
    components.clear();
}

Object::~Object() {
    for (size_t i = 0; i < components.size(); ++i)
        components[i]->~Component();
}

void Object::Update() 
{
    for (size_t i = 0; i < components.size(); ++i)
        components[i]->Update();
}

void Object::Draw()
{
    for (size_t i = 0; i < components.size(); ++i)
        components[i]->Draw();
}

Component* Object::AddComponent(Component* component) {

    component->objectOwnerId = id;
    components.push_back(component);
    component->Awake();
    return component;
}

template <class T>
T* Object::GetComponent() {

    static_assert(std::is_base_of<Component, T>::value, "T must be derived from Component");

    for (Component* component : components) 
        if (T* castedComponent = dynamic_cast<T*>(component)) 
            return castedComponent;

    return nullptr;
}

template <class T>
void Object::RemoveComponent() 
{
    static_assert(std::is_base_of<Component, T>::value, "T must be derived from Component");

    auto it = std::remove_if(components.begin(), components.end(),
                             [](Component* component) { return dynamic_cast<T*>(component); });
    components.erase(it, components.end());
}