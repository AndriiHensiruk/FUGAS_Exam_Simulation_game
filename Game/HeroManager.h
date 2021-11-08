#pragma once
#include <vector>
#include "Hero.h"
class HeroManager
{
public:
	std::vector<Hero>herosList;

	Hero CreateHero(Hero& nyw_hero);
};

