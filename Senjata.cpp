#include <iostream>
#include <string>
#include "Senjata.hpp"

using namespace std;

Senjata::Senjata() : nama(""), tipe(""), damage(0){}

Senjata::Senjata(string nama, string tipe, int damage){
    this->nama = nama;
    this->tipe = tipe;
    this->damage = damage;
}

string Senjata::getWeaponInfo(){
    return "Senjata: " + nama + ", Jenis: " + tipe + ", Damage: " + to_string(damage);
}

int Senjata::getDamage() {
    return damage;
}

string Senjata::getNama() {
    return nama;
}