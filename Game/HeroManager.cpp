#include "HeroManager.h"

Hero HeroManager::CreateHero(Hero& nyw_hero)
{
	//create team names
	std::string* temph = new std::string[5];
	temph[0] = "Slime";
	temph[1] = "Dragon";
	temph[2] = "Cyclops";
	temph[3] = "Goblin";
	temph[4] = "Demon";

	//store them in the name vector
	for (int i = 0; i < 5; i++)
	{
		nyw_hero.Name = temph[i];
		nyw_hero.Id = rand() % 100;
		nyw_hero.HP = rand() % 100;
		

		herosList.push_back(nyw_hero);
	}

	//delete our string arrays
	
	delete[] temph;
    //store them in the name vector
    
    return nyw_hero;
}
