#include<iostream>
#include <vector>
#include "Player.h"
#include "Hero.h"


int main()
{
	Player player;

	player.CreatePlayer();

	std::string pName = player.GetPlayerByName();
	std::cout << pName << std::endl;

	Hero hero("Pety");

	std::string hName = hero.GetHeroByName();
	std::cout << hName << std::endl;

	

	return 0;
}


