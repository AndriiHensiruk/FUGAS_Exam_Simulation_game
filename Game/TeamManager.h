#include "PlayerManager.h"
#include "HeroManager.h"
#include "Team.h"


class TeamManager
{
public:
	Team GenerateNewTeam(std::string TeamName);

	void GetTeamInfo(Team& team);

};

