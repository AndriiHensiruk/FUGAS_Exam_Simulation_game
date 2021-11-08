#include <string>
#include "Hero.h"
long Hero::getHeroById() const
{
    return Id;
}

int Hero::getHeroByHP() const
{
    return HP;
}

long Hero::getHeroByDamage() const
{
    return Damage;
}

std::string Hero::getHeroByName() const
{
    return Name;
}