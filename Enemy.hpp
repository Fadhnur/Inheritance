#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "Object.hpp"

class Enemy : public Object{
private:
    static const int Jumlah_Jenis = 2;
    //Enemy jenis[Jumlah_Jenis];

public:
    Enemy();
    Enemy(int h, int d);
    void darahEnemy(int HP);
    
};

#endif