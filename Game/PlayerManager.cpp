#include <string>
#include "Player.h"

void CreatePlayer(Player& nyw_player)
{
    //create character names
    std::string* temp = new std::string;
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
    for (int i = 0; i < 10; i++)
    {
        nyw_player.Name = temp[i];
        nyw_player.Id = rand() % 100;
        nyw_player.Rang = rand() % 100;
        players.push_back(nyw_player);
    }
    //delete our string arrays
    delete[] temp;

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
	return Rang;
}
