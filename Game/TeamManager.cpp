#include "Team.h"

Team::Team()
{
	//create team names
	std::string* tempT = new std::string[numTNames];
	tempT[0] = "Alpha";
	tempT[1] = "Beta";
	tempT[2] = "Charlie";
	tempT[3] = "Delta";
	tempT[4] = "Echo";

	//store them in the name vector
	for (int i = 0; i < numTNames; i++)
	{
		nTeamContainer.push_back(tempT[i]);
	}

	//delete our string arrays
	delete[] tempT;
}