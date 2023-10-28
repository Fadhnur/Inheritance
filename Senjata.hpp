#ifndef SENJATA_HPP
#define SENJATA_HPP

class Senjata {
private:
    int damage;
    std::string nama;
    std::string tipe;

public:
    Senjata();
    Senjata(std::string nama, std::string tipe, int damage);
    std::string getWeaponInfo();
    int getDamage();
    std::string getNama();

};

#endif