#include <string>
//#include <vector>
#include "Player.h"



void Player::CreatePlayer()
	{
	std::list< Player > players {
    { 1, "slime", 15 },
    { 2, "imp", 15 },
    { 3, "leprechaun", 45},
    { 4, "golem", 20 },
    { 5, "ghost", 25 },
    { 6, "demon", 25 },
    { 7, "goblin", 35 },
    { 8, "pixie", 25 },
    { 9, "mutant", 30 },
    {10, "vampire", 30},
    {11, "werewolf", 35},
    {12, "zombie", 35},
    {13, "cyclops", 40 },
    {14, "sasquatch", 40},
    {16, "phoenix", 100},
    {17,  "dragon", 100 }
	};

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
