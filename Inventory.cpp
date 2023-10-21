#include <iostream>
#include "Inventory.hpp"
#include "Senjata.hpp"

using namespace std;

Inventory::Inventory(){}

void Inventory::printInventory(){
    for(int i = 0; i<2; i++){
        cout << tas[i] << endl;
    }
}

void Inventory::attack(){}

void Inventory::switchWeapon(){
    char jawaban;
    cout << "Apakah anda ingin mengganti senjata? (y/n)" << endl;
    cin >> jawaban;

    if(jawaban == 'n'){}
    else if(jawaban == 'y'){}
    else{
        cout << "Harap masukkan huruf yang benar" << endl;
    }
}

void Inventory::useWeapon(){
    int jawaban;
    cout << "Pilih senjata : " << endl;
    printInventory();
    cout << "Ketik 1 untuk Senjata jarak dekat" << endl;
    cout << "Ketik 2 untuk Senjata jarak jauh" << endl;
    
    if(jawaban == 1){}
    else if(jawaban == 2){}
    else{
        cout << "Senjata tidak ditemukan" << endl;
    }
}