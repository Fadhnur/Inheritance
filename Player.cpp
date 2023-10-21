#include <iostream>
#include "Player.hpp"
#include "Object.hpp"
#include "Inventory.hpp"

using namespace std;

Player::Player(int currentHealth, int damage) : Object(currentHealth, damage){}

void Player::darahPlayer(int HP){
    currentHealth = HP;
}

void Player::takeDamage(int damage){
    currentHealth -= damage;
    if(currentHealth <=0){
        cout << "Player telah mati" << endl;
    }
}

void Player::attack(int damage){

}

