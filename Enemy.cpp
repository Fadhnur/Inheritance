#include <iostream>
#include "Enemy.hpp"
#include "Object.hpp"

using namespace std;
    
Enemy::Enemy(){
    obj.currentHealth = 100;
}

void Enemy::darahEnemy(int HP){
    obj.currentHealth = HP;
}

void Enemy::takeDamage(int damage){
    obj.currentHealth -= damage;
    if(obj.currentHealth <= 0){
        cout << "Musuh telah mati" << endl;
    }
}

void Enemy::attack(int damage){

}