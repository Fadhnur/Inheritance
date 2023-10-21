class gameManager
{
    private:
        Player p;
        Enemy e;

    public:
        gameManager();
        void play();
        void PlayerStatus(int HP);
        void EnemyStatus(int HP);
};


