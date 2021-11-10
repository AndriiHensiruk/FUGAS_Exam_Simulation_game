#include "Player.h"
#include <vector>
class PlayerManager
{
public:
	std::vector<Player>playersList{
		{ 1, "slime", (rand() % 100) },
		{ 2, "imp", (rand() % 100) },
		{ 3, "leprechaun", (rand() % 100)},
		{ 4, "golem", (rand() % 100) },
		{ 5, "ghost", (rand() % 100) },
		{ 6, "demon", (rand() % 100) },
		{ 7, "goblin", (rand() % 100) },
		{ 8, "pixie", (rand() % 100) },
		{ 9, "mutant", (rand() % 100) },
		{10, "vampire", (rand() % 100)},
		{11, "werewolf", (rand() % 100)},
		{12, "zombie", (rand() % 100)},
		{13, "cyclops", (rand() % 100) },
		{14, "sasquatch", (rand() % 100)},
		{16, "phoenix", (rand() % 100)},
		{17,  "dragon", (rand() % 100) }
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
