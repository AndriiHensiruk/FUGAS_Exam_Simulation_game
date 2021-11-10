<<<<<<< HEAD
<<<<<<< HEAD

#include <string>
#include <vector>
=======
=======
>>>>>>> dev
#pragma once
#include "Player.h"
#include <iostream>

<<<<<<< HEAD
>>>>>>> dev
=======
>>>>>>> dev
class Hero
{
public:
    std::string Name;
    int ID;
    int HP;
    int Damage;
<<<<<<< HEAD
<<<<<<< HEAD
    std::string Name;
    int numHNames;
public:

    Hero();
    ~Hero();
    std::vector<std::string> hContainer;

    
    void CreateHero();
    long GetHeroById() const;
    int ShowHeroInfo() const;
    void DeleteHero();
    std::string GetHeroByName() const;
};
=======
=======
>>>>>>> dev

    Hero() {}
    Hero(int ID, std::string Name, int HP, int Damage);

    std::string GetName();
    int GetId();
    int GetDamage();
    int GetHP();

    int SetHP(int hp);

    friend std::ostream& operator<< (std::ostream& out, const Hero& hero);
<<<<<<< HEAD
};
>>>>>>> dev
=======
};
>>>>>>> dev
