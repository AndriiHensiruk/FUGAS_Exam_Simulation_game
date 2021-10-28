#pragma once
#include <string>
class Hero
{
private:
    int Id;
    int HP;
    int Damage;
    std::string Name;
public:
    Hero (std::string heroName)
    {
        Name = heroName;
        Id = 0;
        HP = 0;
        Damage = 0;
    }
    ~Hero() {}

    long getCurrentId() const;
    int getHP() const;
    int getDamage() const;
    std::string getHeroName() const;
};
