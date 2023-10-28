#ifndef INVENTORY_HPP
#define INVENTORY_HPP
#include "Senjata.hpp"
#include "Player.hpp"

class Inventory {
    private:
        static const int Jumlah_senjata = 2;
        Senjata tas[Jumlah_senjata];
        Player& player;

    public: 
        //Inventory();
        Inventory(Player& player);
        void printInventory(); 
        void switchWeapon();
        void useWeapon();

};

#endif