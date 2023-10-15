#ifndef MUSUH_H
#define MUSUH_H

#include "Object.hpp"
#include "Senjata.hpp"

class Musuh : public Object {
private:
    Senjata senjata;

public:
    // Konstruktor untuk inisialisasi health musuh dan senjata
    Musuh(int initialHealth, const Senjata& weapon);

    // Fungsi untuk menyerang player
    void serangPlayer(Object& target);
};

#endif
