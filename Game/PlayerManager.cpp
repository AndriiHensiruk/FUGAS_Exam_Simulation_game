<<<<<<< HEAD
#include <string>
#include "Player.h"

void CreatePlayer(Player& nyw_player)
{
    //create character names
    std::string* temp = new std::string;
=======
#include "PlayerManager.h"
#include<iostream>
Player PlayerManager::CreatePlayer(Player& nyw_player)
{

    //create character names
    std::string* temp = new std::string[10];
>>>>>>> dev
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
<<<<<<< HEAD
        nyw_player.Id = rand() % 100;
        nyw_player.Rang = rand() % 100;
        players.push_back(nyw_player);
    }
    //delete our string arrays
    delete[] temp;

=======
        nyw_player.ID = rand() % 100;
        nyw_player.Rank = rand() % 100;

        playersList.push_back(nyw_player);
    }
    //delete our string arrays
    delete[] temp;
    return nyw_player;
}

Player PlayerManager::GetPlayerByName(std::string name)
{
	for (int i = 0; i < playersList.size(); i++)
	{
		if (playersList[i].GetName() == name)
			return playersList[i];
	}
>>>>>>> dev
}

Player PlayerManager::GetPlayerById(int id)
{
	for (int i = 0; i < playersList.size(); i++)
	{
		if (playersList[i].GetId() == id)
			return playersList[i];
	}
}

void PlayerManager::ShowPlayerInfo(Player player)
{
	std::cout << "ID = " << player.GetId() << "\tName\t" << player.GetName() << "\tRank\t" << player.GetRank() << "\n";
}

void PlayerManager::DeletePlayer(int index)
{
	std::vector<Player>::iterator iterator = playersList.begin();
	std::advance(iterator, index);
	playersList.erase(iterator);
}

// random player selection 
Player PlayerManager::RandPlayer()
{
<<<<<<< HEAD
	return Rang;
=======
	srand((unsigned)time(NULL));
	int a;
	a = (rand() % playersList.size());
	Player player = playersList[a];

	DeletePlayer(a);
	return player;
>>>>>>> dev
}

Player PlayerManager::RandPlayerOne()
{
	srand((unsigned)time(NULL));
	int a;
	a = (rand() % playersList.size());
	Player player = playersList[a];

	DeletePlayer(a);
	return player;
}