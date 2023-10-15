#include "gameManager.hpp"
#include <iostream>
#include <limits> // Untuk membersihkan buffer input

GameManager::GameManager() : permainanBerlangsung(false), ronde(1), tamengPemain(300), tamengMusuh(100), player(tamengPemain), musuh(tamengMusuh) {}

void GameManager::tampilkanMenuUtama() {
    std::cout << "===== Menu Utama =====" << std::endl;
    std::cout << "1. Mulai Permainan Baru" << std::endl;
    std::cout << "2. Lanjutkan Permainan" << std::endl;
    std::cout << "3. Keluar" << std::endl;
    std::cout << "Pilih opsi: ";
}

void GameManager::mulaiPermainan() {
    int opsi;
    do {
        tampilkanMenuUtama();
        std::cin >> opsi;

        switch (opsi) {
        case 1:
            permainanBerlangsung = true;
            std::cout << "Permainan dimulai!" << std::endl;
            break;
        case 2:
            permainanBerlangsung = true;
            bacaDataPermainan();
            std::cout << "Permainan dilanjutkan dari ronde " << ronde << std::endl;
            break;
        case 3:
            std::cout << "Terima kasih telah bermain!" << std::endl;
            return;
        default:
            std::cout << "Opsi tidak valid. Silakan pilih opsi yang benar." << std::endl;
            // Membersihkan buffer input
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }

    } while (opsi != 1 && opsi != 2 && opsi != 3);

    while (permainanBerlangsung) {
        std::cout << "Ronde " << ronde << std::endl;
        aturGiliran();

        if (!musuh.isHidup()) {
            std::cout << "Musuh berhasil dibunuh!" << std::endl;
            tamengPemain.tambahBlok(100); // Regenerasi tameng pemain sebanyak 100 damage
            std::cout << "Tameng pemain telah diregenerasi menjadi " << tamengPemain.getJumlahBlok() << " damage." << std::endl;
        }

        simpanDataPermainan(); // Menyimpan data permainan ke dalam file
        ronde++;
    }
}

// Implementasi metode aturGiliran() dan metode lainnya tetap sama seperti sebelumnya
