#include <raylib.h>
#include "./headers/object.h"
#include "./headers/sprite.h"
#include "./headers/idgenerator.h"
#include <list>
#include <memory>
#include <iostream>

Object::Object() {
    id = IdGenerator::generateUniqueID();
    components.clear();
};

Object::~Object() {
};

void Object::Update() 
{
    for (size_t i = 0; i < components.size(); ++i)
        components[i]->Update();
};


void Object::Draw()
{
    for (size_t i = 0; i < components.size(); ++i)
        components[i]->Draw();
};

template <typename T>
T* Object::AddComponent(T* component) {
    // component->object = this;
    component->objectOwnerId = id;
    components.push_back(component);
    component->Awake();
    component->Start();
    return component;
};

template <typename T>
T* Object::GetComponent() {
    for (Component* component : components) 
        if (T* castedComponent = dynamic_cast<T*>(component)) 
            return castedComponent;

    return nullptr;
};

template <typename T>
void Object::RemoveComponent() 
{
    auto it = std::remove_if(components.begin(), components.end(),
                             [](Component* component) { return dynamic_cast<T*>(component); });
    components.erase(it, components.end());
};