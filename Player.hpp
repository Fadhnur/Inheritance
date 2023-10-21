class Player : public Object
{
protected :
    Object obj;
    Inventory tas;
    
public:
    Player(int currentHealth, int damage);
    void darahPlayer(int HP);
    void takeDamage(int damage);
    void attackEnemy();
};


    
