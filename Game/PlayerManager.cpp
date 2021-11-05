#include <string>
#include <iostream>
#include "Player.h"
#include "PlayerManager.h"

void CreatePlayer(Player& nyw_player)
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
        nyw_player.Rang = rand() % 100;

        players.push_back(nyw_player);
    }
    //delete our string arrays
    delete[] temp;

}

void GetPlayerByName()
{

    for (auto& np : players)
    {
        std::cout << "Name " << np.Name << "\n";
    }
}
void GetPlayerById()
{
    for (auto& np : players)
    {
        std::cout << "ID " << np.Id << "\n";
    }

}
void DeletePlayer()
{
    for (auto& np : players)
        players.pop_back();
}