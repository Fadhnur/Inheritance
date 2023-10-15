#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Tameng.hpp"
#include "Player.hpp"
#include "Musuh.hpp"
#include "Data.hpp"

class GameManager {
public:
    // Konstruktor
    GameManager();

    // Fungsi untuk memulai permainan baru
    void mulaiPermainan();

private :
    bool permainanBerlangsung;
    int ronde;
    Tameng tamengPemain;
    Tameng tamengMusuh;
    Player player;
    Musuh musuh;
    Data dataPermainan;

    // Metode untuk menampilkan menu utama
    void tampilkanMenuUtama();

    // Metode untuk mengatur giliran pemain dan musuh
    void aturGiliran();

    // Metode untuk menyimpan data permainan ke dalam file
    void simpanDataPermainan();

    // Metode untuk membaca data permainan dari file
    void bacaDataPermainan();
};

#endif
