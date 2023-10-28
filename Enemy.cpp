#include <iostream>
#include <cstdlib>
#include "Enemy.hpp"
#include "Senjata.hpp"

using namespace std;
    
Enemy::Enemy() : Object(0, 0), weapon() {}

Enemy::Enemy(int h, int d) : Object(h, d), weapon() {}

void Enemy::darahEnemy(int HP){
    this->health = HP;
    cout << "Darah Musuh : " << health << endl;
}

void Enemy::randomType() {
    int randomWeaponType = rand() % 2;

    if (randomWeaponType == 0) {
        weapon = Senjata("Tombak", "Jarak jauh", 10);
        setEnemyDamage(weapon);
    }
    else {
        weapon = Senjata("Pedang", "Jarak dekat", 15);
        setEnemyDamage(weapon);
    }

}

Senjata Enemy::getWeapon() {
    return weapon;
}

void Enemy::setEnemyDamage(Senjata& weapon) {
    int weaponDamage = weapon.getDamage();

    setDamage(weaponDamage);
}

void Enemy::setDamage(int newDamage) {
    this->damage = newDamage;
}