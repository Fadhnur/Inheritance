#include <iostream>

using namespace std;

class Status {
private:
    int damage;
    string hp;

protected :
    string name;

public:
    Status(/* args */);
    ~Status();

    void attack();
};

Status::Status(/* args */){}

Status::~Status(){}

void Status::attack(){

}

class Player : public Status {
    public :
        Player(string name, int hp) : Status(){

        };


};

class Monster : public Status {
    public :
        Monster(string name);
};

int main(){

    Player p1(string name, int hp);
    

    return 0;
}