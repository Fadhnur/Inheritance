#include "Object.hpp"

// Implementasi konstruktor
Object::Object(int initialHealth) : health(initialHealth) {}

// Implementasi getter untuk health
int Object::getHealth() const {
    return health;
}

// Implementasi fungsi untuk mengurangi health objek
void Object::kurangiHealth(int damage) {
    health -= damage;
}
