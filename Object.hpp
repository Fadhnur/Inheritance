#ifndef OBJECT_H
#define OBJECT_H

class Object {
protected:
    int health;

public:
    // Konstruktor untuk inisialisasi atribut health
    Object(int initialHealth);

    // Getter untuk health
    int getHealth() const;

    // Fungsi untuk mengurangi health objek
    void kurangiHealth(int damage);
};

#endif
