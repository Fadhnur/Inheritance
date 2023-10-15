#include "Data.hpp"
#include <iostream>
#include <fstream>

// Implementasi konstruktor
Data::Data(const std::string& nama) : namaPemain(nama), jumlahKemenangan(0) {
    // Membaca data dari file saat objek Data dibuat
    bacaData();
}

// Implementasi getter untuk jumlah kemenangan
int Data::getJumlahKemenangan() const {
    return jumlahKemenangan;
}

// Implementasi fungsi untuk menambah kemenangan
void Data::tambahKemenangan() {
    jumlahKemenangan++;
}

// Implementasi fungsi untuk menyimpan data ke dalam file teks
void Data::simpanData() const {
    std::ofstream file("data.txt");
    if (file.is_open()) {
        file << namaPemain << " " << jumlahKemenangan;
        file.close();
        std::cout << "Data berhasil disimpan ke dalam file." << std::endl;
    }
    else {
        std::cout << "Gagal membuka file untuk penyimpanan data." << std::endl;
    }
}

// Implementasi fungsi untuk membaca data dari file teks
void Data::bacaData() {
    std::ifstream file("data.txt");
    if (file.is_open()) {
        file >> namaPemain >> jumlahKemenangan;
        file.close();
        std::cout << "Data berhasil dibaca dari file." << std::endl;
    }
    else {
        std::cout << "Gagal membaca file data. Inisialisasi data awal." << std::endl;
    }
}

// Implementasi fungsi untuk menampilkan data pada output
void Data::tampilkanData() const {
    std::cout << "Nama Pemain: " << namaPemain << std::endl;
    std::cout << "Jumlah Kemenangan: " << jumlahKemenangan << std::endl;
}
