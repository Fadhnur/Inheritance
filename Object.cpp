#include <iostream>
#include "Object.hpp"

using namespace std;

Object::Object(int h, int d){
    health = h;
    damage = d;
}

void Object::attack(Object& target){
    if(target.health > 0){
        target.health -= this->damage;
    }
    if(target.health <= 0){
        cout << "Subjek telah mati" << endl;
    }
}