#include <iostream>
#include "Inventory.hpp"
#include "Senjata.hpp"
#include "Player.hpp"

using namespace std;

Inventory::Inventory(Player& player) : player(player){
    tas[0] = Senjata("Shotgun", "Jarak dekat", 40);
    tas[1] = Senjata("M4", "Jarak jauh", 35);
}

void Inventory::printInventory(){
    for(int i = 0; i<2; i++){
        cout << "Senjata " << i + 1 << ": " << endl;
        cout << tas[i].getWeaponInfo() << endl;
    }
}

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
    cout << endl;
    cout << "Ketik 1 untuk pilihan 1" << endl;
    cout << "Ketik 2 untuk pilihan 2" << endl;
    cout << endl;
    
    cin >> jawaban;

    system("cls");

    if(jawaban == 1){
        Senjata senjata = tas[0];
        player.setCharacterDamage(senjata.getDamage());
        cout << "Menggunakan senjata: " << senjata.getNama() << endl;
        cout << "Dengan damage: " << senjata.getDamage() << endl;
    }
    else if(jawaban == 2){
        Senjata senjata = tas[1];
        player.setCharacterDamage(senjata.getDamage());
        cout << "Menggunakan senjata: " << senjata.getNama() << endl;
        cout << "Dengan damage: " << senjata.getDamage() << endl;
    }
    else{
        cout << "Senjata tidak ditemukan" << endl;
    }
}
