#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Object.hpp"

class Player : public Object{
    
public:
    Player(int h, int d);
    void darahPlayer(int Health);
};  

#endif