#include "Player.h"
#include <vector>
class PlayerManager
{
public:
	std::vector<Player>playersList{
		{ 1, "Slime", (rand() % 100) },
		{ 2, "Imp", (rand() % 100) },
		{ 3, "Leprechaun", (rand() % 100)},
		{ 4, "Golem", (rand() % 100) },
		{ 5, "Ghost", (rand() % 100) },
		{ 6, "Demon", (rand() % 100) },
		{ 7, "Goblin", (rand() % 100) },
		{ 8, "Pixie", (rand() % 100) },
		{ 9, "Mutant", (rand() % 100) },

	};
	
	std::vector<Player>playersList_two{
		
		{10, "Vampire", (rand() % 100)},
		{11, "Werewolf", (rand() % 100)},
		{12, "Zombie", (rand() % 100)},
		{13, "Cyclops", (rand() % 100) },
		{14, "Sasquatch", (rand() % 100)},
		{16, "Phoenix", (rand() % 100)},
		{17,  "Dragon", (rand() % 100) }
	};

	PlayerManager() {}

	PlayerManager(Player& players)
	{
	players: this->playersList;
	}


	Player CreatePlayer(Player& new_player);

	Player GetPlayerByName(std::string name);

	Player GetPlayerById(int id);

	void DeletePlayer(int index);

	Player RandPlayer();

	Player RandPlayerOne();



	void  ShowPlayerInfo(Player  player);

};
