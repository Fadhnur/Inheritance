#ifndef SENJATA_H
#define SENJATA_H

#include <string>

class Senjata {
private:
    std::string namaSenjata;
    int damage;

public:
    // Konstruktor untuk inisialisasi atribut
    Senjata(const std::string& nama, int dmg);

    // Getter untuk nama senjata
    std::string getNamaSenjata() const;

    // Getter untuk damage senjata
    int getDamage() const;

    // Fungsi untuk menampilkan informasi senjata
    void tampilkanInfoSenjata() const;
};

#endif

