#pragma once
class Hero
{
public:
    int Id;
    std::string Name;
    int HP;
    long Damage;

    long getHeroById() const;
    int getHeroByHP() const;
    long getHeroByDamage() const;
    std::string getHeroByName() const;
};

