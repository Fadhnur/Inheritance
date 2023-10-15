#include "Musuh.hpp"
#include <iostream>
#include <cstdlib> // Untuk menggunakan fungsi rand()

// Implementasi konstruktor
Musuh::Musuh(int initialHealth, const Senjata& weapon) : Object(initialHealth), senjata(weapon) {}

// Implementasi fungsi untuk menyerang player secara acak
void Musuh::serangPlayer(Object& target) {
    int damage = rand() % senjata.getDamage() + 1; // Mendapatkan damage acak antara 1 dan damage senjata
    std::cout << "Musuh menyerang player dengan " << senjata.getNamaSenjata() << " dan menyebabkan " << damage << " damage." << std::endl;
    target.kurangiHealth(damage);
}
