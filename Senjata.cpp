#include "Senjata.hpp"
#include <iostream>

// Implementasi konstruktor
Senjata::Senjata(const std::string& nama, int dmg) : namaSenjata(nama), damage(dmg) {}

// Implementasi getter untuk nama senjata
std::string Senjata::getNamaSenjata() const {
    return namaSenjata;
}

// Implementasi getter untuk damage senjata
int Senjata::getDamage() const {
    return damage;
}

// Implementasi fungsi untuk menampilkan informasi senjata
void Senjata::tampilkanInfoSenjata() const {
    std::cout << "Senjata: " << namaSenjata << std::endl;
    std::cout << "Damage: " << damage << std::endl;
}
