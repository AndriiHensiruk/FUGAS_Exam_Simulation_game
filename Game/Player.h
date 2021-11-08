#pragma once
#include <string>

class Player
{
public:
    int Id;
    std::string Name;
    int Rank;

    long getPlayerById() const;
    std::string getPlayerByName() const;
    int gettPlayerByRank() const;
};

