#include <string>
#include "Hero.h"
long Hero::getCurrentId() const
{
    return Id;
}

int Hero::getHP() const
{
    return HP;
}

int Hero::getDamage() const
{
    return Damage;
}

std::string Hero::getHeroName() const
{
    return Name;
}