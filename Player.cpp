#include <iostream>
#include "Player.hpp"


using namespace std;

Player::Player(int h, int d) : Object(h, d){}

void Player::darahPlayer(int Health){
    cout << "Darah Player : " << Health << endl;
}

