#ifndef gameManager_HPP
#define gameManager_HPP

#include "Player.hpp"
#include "Enemy.hpp"
#include "Inventory.hpp"

class gameManager
{
private:
        Player player;
        Enemy enemy;
        Inventory inventory;

public:
        gameManager();
        void play();
        void displayStatus();
        void playerAttack();
        bool isWin();
        bool isLife();
};

#endif