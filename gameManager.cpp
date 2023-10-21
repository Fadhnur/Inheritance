#include <iostream>
#include "gameManager.hpp"
#include "Player.hpp"
#include "Object.hpp"
#include "Inventory.hpp"
#include "Enemy.hpp"
#include "Senjata.hpp"

using namespace std;

gameManager::gameManager()
{
}

void gameManager::EnemyStatus(){
    e.DarahEnemy(100);
    cout << e.darahEnemy << endl;
}

void gameManager::PlayerStatus(){
    p.darahPlayer(100);
    cout << p.darahPlayer << endl;
}

void gameManager::play(){
    Senjata senjata;
    Player plyr;
    Enemy enemy;
    gameManager game;

    char input;
    cout << "Selamat datang di permainan!" << endl;
    cout << "Tekan huruf M untuk Mulai" << endl;
    cin >> input;
    cout << endl;

    if(input == 'm'||'M'){
        system("cls");

        //menampilkan player status
        game.PlayerStatus();
        //menampilkan enemy status
        game.EnemyStatus();
        //menampilkan opsi untuk menyerang
        
        //menyerang
        //enemy auto serang player

        //menampilkan player status
        //menampilkan enemy status
        //menampilkan opsi untuk menyerang

    }
}