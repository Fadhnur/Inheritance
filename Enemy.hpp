#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "Object.hpp"
#include "Senjata.hpp"

class Enemy : public Object{
private:
    static const int Jumlah_Jenis = 2;
    int jenis[Jumlah_Jenis];
    Senjata weapon;

public:
    Enemy();
    Enemy(int h, int d);
    void darahEnemy(int HP);
    void randomType();
    Senjata getWeapon();
    void setEnemyDamage(Senjata& weapon);
    void setDamage(int newDamage);
};

#endif