#include "Team.h"
Team::Team(std::string name, Player playersList[5], Hero herosList[5])
{
	
	for (int i = 0; i < 5; i++)
	{
		PlayerList[i] = playersList[i];
		HerosList[i] = herosList[i];
	}
}
