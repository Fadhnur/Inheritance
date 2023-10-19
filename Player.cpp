#include <iostream>
#include "Player.hpp"

using namespace std;

Player::Player(int currentHealth, int maxHealth, int damage) : Object(currentHealth, maxHealth, damage){}

void Player::Darah(int HP){
    obj.currentHealth = HP;
}

void Player::takeDamage(int damage){
    obj.currentHealth -= damage;
    if(obj.currentHealth <=0){
        cout << "Player telah mati" << endl;
    }
}

void Player::hitEnemy(int damage){

}

