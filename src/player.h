#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

class Player : public Entity
{
    public:
        Player();
        ~Player();
        void Update() override;
        void Draw() override;
        float moveSpeed = 100;
};

#endif