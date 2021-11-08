#include <string>
#include "Hero.h"
long Hero::getId() const
{
    return Id;
}

int Hero::getHP() const
{
    return HP;
}

long Hero::getDamage() const
{
    return Damage;
}

std::string Hero::getName() const
{
    return Name;
}