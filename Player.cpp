#include <iostream>
#include "Player.hpp"

using namespace std;

Player::Player() : Object(0, 0){}

Player::Player(int h, int d) : Object(h, d){}

void Player::darahPlayer(int Health){
    this->health = Health;
    cout << "Darah Player : " << health << endl;
}

void Player::setCharacterDamage(int Damage) {
    this->damage = Damage;
}
