#pragma once
#include <string>
#include <list>
class Player
{
private:
    int Id;
    int Rank;
    std::string Name;
public:
    Player(int playerid, std::string playerName,  int playerrank)
    {
        Name = playerName;
        Id = playerid;
        Rank = playerrank;
    }
    Player()
    {

    }
    

    void CreatePlayer();
    void DeletePlayer();
    long GetPlayerById() const;
    int ShowPlayerInfo() const;
    std::string GetPlayerByName() const;
};