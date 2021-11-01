#include <string>
//#include <vector>
#include "Player.h"



void Player::CreatePlayer(Player& players)
	{
	std::list< Player > players = {
		{1324, "slime", 34},
		{234, "golem", 56},
		{23, "demon",36},
		{67, "sasquatch",5},
		{89, "dragon", 7},
		{123, "vampire", 67},
		{24, "cyclops", 100},
		{8, "phoenix", 90},
		{78, "imp", 678},
		{1, "mutant", 34567}

	};
	//players.push_back(Player{ 1,"2", 3});
	}

std::string Player::GetPlayerByName() const
{
   return Name;
}

long Player::GetPlayerById() const
{
	return Id;
}

void Player::DeletePlayer()
	{
	Player::~Player() ;
	}

int Player::ShowPlayerInfo() const
{
	return Rank;
}
