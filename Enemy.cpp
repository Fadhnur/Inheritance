#include <iostream>
#include "Enemy.hpp"

using namespace std;
    
Enemy::Enemy() : Object(0, 0){}

Enemy::Enemy(int h, int d) : Object(h, d){}

void Enemy::darahEnemy(int HP){
    this->health = HP;
    cout << "Darah Musuh : " << health << endl;
}

