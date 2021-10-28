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
    
    void CreateHero();
    long GetHeroById() const;
    int ShowHeroInfo() const;
    void DeleteHero();
    std::string GetHeroByName() const;
};
