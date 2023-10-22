#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "Object.hpp"

class Enemy : public Object{
public:
    Enemy(int h, int d);
    void darahEnemy(int HP);
};

#endif