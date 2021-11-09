#include "PlayerManager.h"
#include<iostream>
Player PlayerManager::CreatePlayer(Player& nyw_player)
{

    //create character names
    std::string* temp = new std::string[10];
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
        nyw_player.Rank = rand() % 100;

        playersList.push_back(nyw_player);
    }
    //delete our string arrays
    delete[] temp;
    return nyw_player;
}

Player PlayerManager::getPlayerByName(std::string name)
    {
        for (int i = 0; i < playersList.size(); i++)
        {
            if (playersList[i].Name == name)
                return playersList[i];
        }
}

Player PlayerManager::getPlayerById(int id)
{
    for (int i = 0; i < playersList.size(); i++)
    {
        if (playersList[i].Id == id)
            return playersList[i];
    }
}

void PlayerManager::DeletePlayer(int index)
{
    std::vector<Player>::iterator iterator = playersList.begin();
    std::advance(iterator, index);
    playersList.erase(iterator);
}

void PlayerManager::showPlayerInfo(Player player)
{
    std::cout <<"ID  " << player.getId() << "\tName\t" << player.getName() << "\tRank\t" << player.getRank() << "\n";
}

Player PlayerManager::RandPlayer()
{
    srand((unsigned)time(NULL));
    int a;
    a = (rand() % playersList.size());
    Player player = playersList[a];

    DeletePlayer(a);
    return player;
}