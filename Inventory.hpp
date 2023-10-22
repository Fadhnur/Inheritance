#ifndef INVENTORY_HPP
#define INVENTORY_HPP
#include "Senjata.hpp"

class Inventory {
    public:
        Senjata tas[2];

        Inventory();
        void printInventory(); 
        void switchWeapon();
        void useWeapon();
};

#endif