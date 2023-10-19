#include <iostream>
#include "gameManager.hpp"
#include "Player.hpp"
#include "Object.hpp"
#include "inventory.hpp"
#include "enemy.hpp"

using namespace std;

gameManager::gameManager()
{
}

void gameManager::PlayerStatus(int HP){
    cout << "Player" << endl;
    p.Darah(HP);
    cout << "HP : " << p.Darah(HP) << endl;
}

void gameManager::play(){
}