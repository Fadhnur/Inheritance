class Enemy : public Object
{
    protected:
    Object obj;

    public:
    Enemy();
    void darahEnemy(int HP);
    void takeDamage(int damage);
    void attackPlayer();
};
