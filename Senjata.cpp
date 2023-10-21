#include <iostream>
#include <string>
#include "Senjata.hpp"
#include "Inventory.hpp"

using namespace std;

Senjata::Senjata(string nama){}

void Senjata::jarakDekat(string nama, int damage){
    cout << "Nama Senjata : " << nama << endl;
    cout << "Damage : " << damage << endl;
}

void Senjata::jarakJauh(string nama, int damage){
    cout << "Nama Senjata : " << nama << endl;
    cout << "Damage : " << damage << endl;
}