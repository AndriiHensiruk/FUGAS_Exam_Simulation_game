#pragma once
#include <string>
#include <vector>
class Hero
{
private:
    int Id;
    int HP;
    int Damage;
    std::string Name;
    int numHNames;
public:


    std::vector<std::string> hContainer;

    
    void CreateHero();
    long GetHeroById() const;
    int ShowHeroInfo() const;
    void DeleteHero();
    std::string GetHeroByName() const;
};
