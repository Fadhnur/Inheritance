#ifndef PLAYER_H
#define PLAYER_H

#include "Object.hpp"
#include "Senjata.hpp"

class Player : public Object {
private:
    Senjata senjata;

public:
    // Konstruktor untuk inisialisasi health player dan senjata
    Player(int initialHealth, const Senjata& weapon);

    // Fungsi untuk menyerang musuh
    void serangMusuh(Object& target);
};

#endif
