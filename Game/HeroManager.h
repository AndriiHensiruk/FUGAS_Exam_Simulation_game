#pragma once
#include <vector>
#include "Hero.h"
#include<iostream>

class HeroManager
{
public:
	std::vector<Hero>herosList{
		{1,"Adams",(rand() % 100),(rand() % 100) },
		{2,"Baker",(rand() % 100),(rand() % 100) },
		{3,"Clark",(rand() % 100),(rand() % 100) },
		{4,"Davis",(rand() % 100),(rand() % 100) },
		{5,"Evans",(rand() % 100),(rand() % 100) },
		{6,"Ghosh",(rand() % 100),(rand() % 100) },
		{7,"Frank",(rand() % 100),(rand() % 100) },
		{8,"Hills",(rand() % 100),(rand() % 100) },
		{9,"Irwin",(rand() % 100),(rand() % 100) },
		{10,"Jones",(rand() % 100),(rand() % 100) },
		{11,"Klein",(rand() % 100),(rand() % 100) },
		{12,"Lopez",(rand() % 100),(rand() % 100) },
		{13,"Mason",(rand() % 100),(rand() % 100) },
		{14,"Nalty",(rand() % 100),(rand() % 100) },
		{15,"Ochoa",(rand() % 100),(rand() % 100) },
		{16,"Patel",(rand() % 100),(rand() % 100) },
		{17,"Quinn",(rand() % 100),(rand() % 100) }
	};


	HeroManager()
	{}

	Hero CreateHero(Hero &nyw_hero);
	Hero GetHeroByName(std::string name);
	Hero GetHeroByById(int id);

	void ShowHeroInfo(Hero hero);

	void DeleteHero(int index);

	void Print();

	Hero RandHero();

	Hero RandHeroOne();

};
