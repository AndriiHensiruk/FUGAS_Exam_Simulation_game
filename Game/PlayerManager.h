#include "Player.h"
#include <vector>
class PlayerManager
{
public:
	std::vector<Player>players;
	
	Player CreatePlayer(Player& nyw_player);
};

