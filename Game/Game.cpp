#include<iostream>
#include <string>
#include <vector>
#include "GameManager.h"



int main()
{
<<<<<<< HEAD
	Player player;

	player.CreatePlayer();

	std::string pName = player.GetPlayerByName();
	std::cout << pName << std::endl;

	/*Hero hero("Pety");

	std::string hName = hero.GetHeroByName();
	std::cout << hName << std::endl;*/

=======
	GameManager gamemanager;
	gamemanager.PerformGameSession();
>>>>>>> dev
	

	return 0;
}


