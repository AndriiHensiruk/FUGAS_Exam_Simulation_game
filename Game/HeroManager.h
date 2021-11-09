#pragma once
#include <vector>
#include "Hero.h"
class HeroManager
{
public:
	std::vector<Hero>herosList;

	Hero CreateHero(Hero& nyw_hero);
	Hero getHeroByName(std::string name);
	Hero getHeroByById(int id);
	void showHeroInfo(Hero hero);
	void DeleteHero(int index);
};

