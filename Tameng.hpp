#ifndef TAMENG_H
#define TAMENG_H

class Tameng {
private:
    int jumlahBlok;

public:
    // Konstruktor dengan inisialisasi daya tahan awal
    Tameng(int dayaTahanAwal);

    // Fungsi untuk mengurangi damage serangan berdasarkan blok tameng
    int blokSerangan(int damage);

    // Fungsi untuk menambah jumlah blok tameng
    void tambahBlok(int blok);

    // Fungsi untuk mendapatkan jumlah blok tameng
    int getJumlahBlok() const;
};

#endif
