#include "HeroManager.h"
#include<iostream>

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

Hero HeroManager::getHeroByName(std::string name)
{
	for (int i = 0; i < herosList.size(); i++)
	{
		if (herosList[i].getName() == name)
			return herosList[i];
	}
}

Hero HeroManager::getHeroByById(int id)
{
	for (int i = 0; i < herosList.size(); i++)
	{
		if (herosList[i].getId() == id)
			return herosList[i];
	}
}

void HeroManager::showHeroInfo(Hero hero)
{
	std::cout << "ID = " << hero.getId() << "\tName\t" << hero.getName() << "\tHP\t" << hero.getHP() << "\tDamage\t" << hero.getDamage() << "\n";
}

void HeroManager::DeleteHero(int index)
{
	std::vector<Hero>::iterator iterator = herosList.begin();
	std::advance(iterator, index);
	herosList.erase(iterator);
}
