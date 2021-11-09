#pragma once
#include "Player.h"
#include "Hero.h"


class Team
{
public:
	std::string Name;
	Player PlayerList[5];
	Hero HerosList[5];


	
	Team(std::string name, Player playersList[5], Hero herosList[5]);

	

};

