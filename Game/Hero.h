#pragma once
#include "string"

class Hero
{
public:
    int Id;
    std::string Name;
    int HP;
    long Damage;

    Hero() {};

    long getId() const;
    int getHP() const;
    long getDamage() const;
    std::string getName() const;
};

