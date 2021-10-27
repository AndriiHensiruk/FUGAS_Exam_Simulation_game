#include<iostream>

enum PlayerType
{
	Dragon,
	Goblin,
	Ogre,
	Orc,
	Skeleton,
	Troll,
	Vampire,
	Zombie,
	MAX_MONSTER_TYPES
};
class Player
{
public:
	int Id;
	char Name;
	int Rang;
};

class Hero
{
public:
	int Id;
	char Name;
	int HP;
	int Damage;
};
class PlayerManager
{
	void CreatePlayer()
	{

	}

	void GetPlayerByName()
	{

	}

	void GetPlayerById()
	{

	}

	void DeletePlayer()
	{

	}

	void ShowPlayerInfo()
	{

	}

};

class HeroManager
{
	void CreateHero()
	{

	}

	void GetHeroByName()
	{

	}

	void GetHeroById()
	{

	}

	void DeleteHero()
	{

	}

	void ShowHeroInfo()
	{

	}

};

class Team
{
public:
	char name;
};

class TeamManager
{
	void GenerateNewTeam()
	{

	}

	void GetTeamInfo()
	{

	}
};

class Session
{
	void StartTime()
	{

	}

	void TeamOne()
	{

	}

	void TeamTwo()
	{

	}

	void Winner()
	{

	}

	void CalculateWinner()
	{

	}

};

class GameManager
{
	void PerformGameSession()
	{

	}
};

int main()
{
	return 0;
}


