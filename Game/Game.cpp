#include<iostream>
#include <vector>
#include "Player.h"
#include "Hero.h"


int main()
{
	Player player(12,"hgfh",7);

	std::string pName = player.GetPlayerByName();
	std::cout << pName << std::endl;

	Hero hero("Pety");

	std::string hName = hero.GetHeroByName();
	std::cout << hName << std::endl;

	int totalPlayers = 5;
	//std::vector<Player> players(totalPlayers);
	//delete[] players;

	return 0;
}


