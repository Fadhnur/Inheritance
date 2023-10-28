#include <iostream>
#include "gameManager.hpp"
#include "Player.hpp"
#include "Object.hpp"
#include "Inventory.hpp"
#include "Enemy.hpp"
#include "Senjata.hpp"

using namespace std;

gameManager::gameManager() : player(), enemy(), inventory(player) {
}

void gameManager::play(){
    Inventory inventory(player);

    char input;
    cout << "Selamat datang di permainan!" << endl;
    cout << "Tekan huruf M untuk Mulai" << endl;
    cin >> input;
    cout << endl;

    if(input == 'm'|| input == 'M'){
        system("cls");

        //memilih senjata
        inventory.useWeapon();
        cout << endl;

        cout << "Kalahkan para monster!" << endl;
        cout << endl;

        //menampilkan player status
        player.darahPlayer(100);
        //menampilkan enemy status
        enemy.darahEnemy(150);
        enemy.randomType();


        cout << endl;

        //menampilkan status player dan enemy
        displayStatus();

        //menampilkan opsi untuk menyerang
        while (enemy.getHealth() > 0) {
            playerAttack();
            displayStatus();
        }
        //mengecek kondisi musuh jika darah 0
        isWin();

        //mengecek kondisi pemain
        isLose();

        enemy.randomType();
    }

    else {
        cout << "Masukkan huruf dengan benar!" << endl;
        cout << endl;
        play();
    }


}

void gameManager::displayStatus() {
    cout << "Status Player " << endl;
    cout << "HP : " << player.getHealth() << endl;
    cout << "Damage : " << player.getDamage() << endl;
    cout << endl;

    cout << "Status Musuh " << endl;
    cout << "HP : " << enemy.getHealth() << endl;
    cout << "Damage : " << enemy.getDamage() << endl;
    cout << endl;
}

void gameManager::playerAttack() {
    char jawab;
    cout << endl;
    cout << "Serang musuh dengan mengetik 'A' (attack) : ";
    cin >> jawab;
    cout << endl;

    if (jawab == 'a' || jawab == 'A') {
        player.attack(enemy);
        enemy.attack(player);

    }
    else {
        cout << "input huruf dengan benar" << endl;
    }
}

bool gameManager::isWin() {
    if (enemy.getHealth() <= 0) {
        cout << "Musuh telah dikalahkan!" << endl;
        
        return true;
    }
    return false;
}

bool gameManager::isLose() {
    if (player.getHealth() <= 0) {
        cout << "Pemain telah mati" << endl;
        cout << "Kalah" << endl;
        return true;
    }
    return false;
}