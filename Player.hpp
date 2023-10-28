#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Object.hpp"

class Player : public Object{
    
public:
    Player();
    Player(int h, int d);
    void darahPlayer(int Health);
    void setCharacterDamage(int Damage);
};  

#endif