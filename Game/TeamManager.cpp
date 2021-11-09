#include "TeamManager.h"
#include <iostream>

Team TeamManager::GenerateNewTeam(std::string TeamName)
{
	PlayerManager playermanager;
	HeroManager heromanager;

	Player newPlayerlist[5];
	Hero newHerolist[5];

	for (int i = 0; i < 5; i++)
	{
		newPlayerlist[i] = playermanager.RandPlayer();
		newHerolist[i] = heromanager.RandHero();
		
	}

	Team team(TeamName, newPlayerlist, newHerolist);
	return team;
}

void TeamManager::GetTeamInfo(Team& team)
{
	PlayerManager playermanager;
	HeroManager heromanager;

	std::cout << "Team: " << team.Name << "\n";
	std::cout << "Players" << "\n";
	for (auto element : team.PlayerList)
	{
		playermanager.showPlayerInfo(element);
	}

	std::cout << "Heroes" << "\n";
	for (auto element : team.HerosList)
	{
		heromanager.showHeroInfo(element);
	}
}