#include <string>
#include <list>
#include "Player.h"



void Player::CreatePlayer()
	{
	
	
		
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
