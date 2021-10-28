#pragma once
#include <string>
class Player
{
private:
    int Id;
    int Rank;
    std::string Name;
public:
    Player(int id, std::string playerName,  int rank)
    {
        Name = playerName;
        Id = id;
        Rank = rank;
    }
    void CreatePlayer();
    void DeletePlayer();
    long GetPlayerById() const;
    int ShowPlayerInfo() const;
    std::string GetPlayerByName() const;
};