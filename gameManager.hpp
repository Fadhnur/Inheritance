#ifndef gameManager_HPP
#define gameManager_HPP

#include "Player.hpp"
#include "Enemy.hpp"
#include "Inventory.hpp"

class gameManager
{
public:
        Player p;
        Enemy e;
        Inventory inventory;

        gameManager();
        void play();
        void PlayerStatus();
        void EnemyStatus();
};

#endif