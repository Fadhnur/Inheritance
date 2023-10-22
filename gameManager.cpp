#include <iostream>
#include "gameManager.hpp"
//#include "Player.hpp"
//#include "Object.hpp"
#include "Inventory.hpp"
//#include "Enemy.hpp"
//#include "Senjata.hpp"

using namespace std;

gameManager::gameManager(){}

void gameManager::play(){
    //Senjata senjata;
    //Player plyr;
    //Enemy enemy;
    //gameManager game;
    Inventory tas;

    char input;
    cout << "Selamat datang di permainan!" << endl;
    cout << "Tekan huruf M untuk Mulai" << endl;
    cin >> input;
    cout << endl;

    if(input == 'm'||'M'){
        system("cls");

        //Memilih Senjata
        tas.printInventory();

        //menampilkan player status
        //game.PlayerStatus();
        //menampilkan enemy status
        //game.EnemyStatus();
        //menampilkan opsi untuk menyerang
        
        //menyerang
        //enemy auto serang player

        //menampilkan player status
        //menampilkan enemy status
        //menampilkan opsi untuk menyerang

    }
}