class Player : public Object
{
protected :
    Object obj;
    inventory inv;
    
public:
    Player(int currentHealth, int maxHealth, int damage);
    void Darah(int HP);
    void takeDamage(int damage);
    void hitEnemy(int damage);

};


    
