#include <string>
#include "Hero.h"

void Hero::CreateHero()
{

}
long Hero::GetHeroById() const
{
    return Id;
}

int Hero::ShowHeroInfo() const
{
    return HP, Damage;
}

void Hero::DeleteHero() 
{
    Hero::~Hero();
}

std::string Hero::GetHeroByName() const
{
    return Name;
}