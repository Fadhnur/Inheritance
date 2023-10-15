#ifndef DATA_H
#define DATA_H

#include <string>

class Data {
private:
    std::string namaPemain;
    int jumlahKemenangan;

public:
    // Konstruktor untuk inisialisasi data
    Data(const std::string& nama);

    // Mengambil jumlah kemenangan
    int getJumlahKemenangan() const;

    // Menambah kemenangan
    void tambahKemenangan();

    // Menyimpan data ke dalam file teks
    void simpanData() const;

    // Membaca data dari file teks
    void bacaData();

    // Menampilkan data pada output
    void tampilkanData() const;
};

#endif
