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
		nyw_hero.ID = rand() % 100;
		nyw_hero.HP = rand() % 100;
		

		herosList.push_back(nyw_hero);
	}

	//delete our string arrays
	
	delete[] temph;
    //store them in the name vector
    
    return nyw_hero;
}

Hero HeroManager::GetHeroByName(std::string name)
{
	for (int i = 0; i < herosList.size(); i++)
	{
		if (herosList[i].GetName() == name)
			return herosList[i];
	}
}

Hero HeroManager::GetHeroByById(int id)
{
	for (int i = 0; i < herosList.size(); i++)
	{
		if (herosList[i].GetId() == id)
			return herosList[i];
	}
}

void HeroManager::ShowHeroInfo(Hero hero)
{
	std::cout << "ID = " << hero.GetId() << "\tName\t" << hero.GetName() << "\tHP\t" << hero.GetHP() << "\tDamage\t" << hero.GetDamage() << "\n";
}

void HeroManager::DeleteHero(int index)
{
	std::vector<Hero>::iterator iterator = herosList.begin();
	std::advance(iterator, index);
	herosList.erase(iterator);
}
void HeroManager::Print()
{
	for (auto elem : herosList)
	{
		std::cout << elem << "\n";
	}
}

// random choice of the hero 

Hero HeroManager::RandHero()
{
	srand((unsigned)time(NULL));
	int a;
	a = (rand() % herosList.size());
	Hero hero = herosList[a];

	std::vector<Hero>::iterator iterator = herosList.begin();
	std::advance(iterator, a);
	herosList.erase(iterator);

	return hero;
}

Hero HeroManager::RandHeroOne()
{
	srand((unsigned)time(NULL));
	int a;
<<<<<<< HEAD
	a = (rand() % herosList.size());
	Hero hero = herosList[a];

	std::vector<Hero>::iterator iterator = herosList.begin();
	std::advance(iterator, a);
	herosList.erase(iterator);
=======
	a = (rand() % herosList_two.size());
	Hero hero = herosList_two[a];

	std::vector<Hero>::iterator iterator = herosList_two.begin();
	std::advance(iterator, a);
	herosList_two.erase(iterator);
>>>>>>> dev

	return hero;
}