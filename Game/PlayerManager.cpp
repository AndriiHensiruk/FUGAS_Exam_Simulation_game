#include <string>
#include "Player.h"

Player::Player()
{
	numNames = 10;
//create character names
std::string* temp = new std::string[numNames];
temp[0] = "Raphael";
temp[1] = "Elizabeth";
temp[2] = "Lucius";
temp[3] = "Seigfried";
temp[4] = "Edward";
temp[5] = "Mirabelle";
temp[6] = "Abraham";
temp[7] = "Hildegard";
temp[8] = "Fendrel";	//perhaps in the future could add in some way to store titles for a character | ex. Fendrel the Wicked
temp[9] = "Ulric";

//store them in the name vector
for (int i = 0; i < numNames; i++)
{
	nContainer.push_back(temp[i]);
}
delete[] temp;
}

std::string Player::CreatePlayer()
{
	if (!nContainer.empty())
	{
		int roll =5;
		std::string val = nContainer.at(roll);
		nContainer.erase(nContainer.begin() + roll);	//remove that name from container since it has been assigned
		return val;
	}
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
