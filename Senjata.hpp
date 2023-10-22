#ifndef SENJATA_HPP
#define SENJATA_HPP

class Senjata {
protected:
    int damage;
    std::string nama;
    std::string tipe;

public:
    Senjata(std::string nama, std::string tipe, int damage);
    std::string getWeaponInfo();
    
};

#endif