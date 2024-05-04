#ifndef PLAYER_H
#define PLAYER_H

#include "../../core/headers/object.h"

class Player : public Object
{
    public:
        Player();
        ~Player();

        void Update() override;
        void Draw() override;
};

#endif