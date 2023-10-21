class Inventory {
    protected: 
    string tas[2];
    Senjata meleeWeapon;
    Senjata rangedWeapon;

    public:
    Inventory();
    void printInventory();
    
    void switchWeapon();
    void useWeapon();
};
