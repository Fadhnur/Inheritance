class Enemy : public Object
{
    protected:
    Object obj;

    public:
    Enemy();
    void DarahEnemy(int HP);
    void takeDamage(int damage);
    void hitPlayer(int damage);
};
