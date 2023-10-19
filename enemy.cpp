#include <iostream>
#include "enemy.hpp"

using namespace std;
    
Enemy::Enemy(){
    obj.maxHealth = 100;
}

void Enemy::DarahEnemy(int HP){
    obj.currentHealth = HP;
}

void Enemy::takeDamage(int damage){
    obj.currentHealth -= damage;
    if(obj.currentHealth <= 0){
        cout << "Musuh telah mati" << endl;
    }
}

void Enemy::hitPlayer(int damage){

}