#include "Player.h"
#include <vector>
class PlayerManager
{
public:
	std::vector<Player>playersList;
	
	Player CreatePlayer(Player& nyw_player);

	Player getPlayerByName(std::string name);

	Player getPlayerById(int id);

	void showPlayerInfo(Player player);

	void DeletePlayer(int index);

	Player RandPlayer();

};

