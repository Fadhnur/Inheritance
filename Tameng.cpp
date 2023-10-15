#include "Tameng.hpp"

Tameng::Tameng(int dayaTahanAwal) : jumlahBlok(dayaTahanAwal) {}

int Tameng::blokSerangan(int damage) {
    // Mengurangi damage serangan berdasarkan blok tameng
    if (damage > jumlahBlok) {
        damage -= jumlahBlok;
        jumlahBlok = 0;
    }
    else {
        jumlahBlok -= damage;
        damage = 0;
    }
    return damage;
}

void Tameng::tambahBlok(int blok) {
    // Menambah jumlah blok tameng
    jumlahBlok += blok;
}

int Tameng::getJumlahBlok() const {
    // Mengembalikan jumlah blok tameng
    return jumlahBlok;
}
