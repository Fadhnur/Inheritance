#ifndef OBJECT_HPP
#define OBJECT_HPP

class Object {
public :
    int damage;
    int health;

    Object(int h, int d);
    void attack(Object& target);
};

#endif