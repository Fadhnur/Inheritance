#ifndef OBJECT_HPP
#define OBJECT_HPP

class Object {
protected :
    int damage;
    int health;

public:
    Object(int h, int d);
    void attack(Object& target);
    int getHealth();
    int getDamage();
};

#endif