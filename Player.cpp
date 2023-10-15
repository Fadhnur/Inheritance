#include "Player.hpp"
#include <iostream>

// Implementasi konstruktor
Player::Player(int initialHealth, const Senjata& weapon) : Object(initialHealth), senjata(weapon) {}

// Implementasi fungsi untuk menyerang musuh
void Player::serangMusuh(Object& target) {
    std::cout << "Player menyerang musuh dengan " << senjata.getNamaSenjata() << " dan menyebabkan " << senjata.getDamage() << " damage." << std::endl;
    target.kurangiHealth(senjata.getDamage());
}


    