#pragma once
#include <string>
class Player
{
private:
    int Id;
    int Rank;
    std::string Name;
public:
    Player(std::string playerName)
    {
        Name = playerName;
        Id = 0;
        Rank = 0;
    }
    ~Player() {}

    long getCurrentId() const;
    int getRank() const;
    std::string getPlayerName() const;
};