#include<iostream>
#include "Player.h"
#include "Hero.h"

//class Player
//{
//public:
//	int Id;
//	char Name[30];
//	int Rang;
//};
//
//class Hero
//{
//public:
//	int Id;
//	char Name[30];
//	int HP;
//	int Damage;
//};
//class PlayerManager
//{
//	void CreatePlayer()
//	{
//
//	}
//
//	void GetPlayerByName()
//	{
//
//	}
//
//	void GetPlayerById()
//	{
//
//	}
//
//	void DeletePlayer()
//	{
//
//	}
//
//	void ShowPlayerInfo()
//	{
//
//	}
//
//};
//
//class HeroManager
//{
//	void CreateHero()
//	{
//
//	}
//
//	void GetHeroByName()
//	{
//
//	}
//
//	void GetHeroById()
//	{
//
//	}
//
//	void DeleteHero()
//	{
//
//	}
//
//	void ShowHeroInfo()
//	{
//
//	}
//
//};
//
//class Team
//{
//public:
//	char name;
//};
//
//class TeamManager
//{
//	void GenerateNewTeam()
//	{
//
//	}
//
//	void GetTeamInfo()
//	{
//
//	}
//};
//
//class Session
//{
//	void StartTime()
//	{
//
//	}
//
//	void TeamOne()
//	{
//
//	}
//
//	void TeamTwo()
//	{
//
//	}
//
//	void Winner()
//	{
//
//	}
//
//	void CalculateWinner()
//	{
//
//	}
//
//};
//
//class GameManager
//{
//	void PerformGameSession()
//	{
//
//	}
//};

int main()
{
	Player player("Vasy");

	std::string pName = player.getPlayerName();
	std::cout << pName << std::endl;

	Hero hero("Pety");

	std::string hName = hero.getHeroName();
	std::cout << hName << std::endl;
	return 0;
}


