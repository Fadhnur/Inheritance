#include <iostream>
#include "Enemy.hpp"


using namespace std;
    
Enemy::Enemy(int h, int d) : Object(h, d){}

void Enemy::darahEnemy(int health){
    cout << "Darah Musuh : " << health << endl;
}

