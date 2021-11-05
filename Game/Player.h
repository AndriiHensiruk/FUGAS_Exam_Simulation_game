#pragma once
#include <string>
#include <vector>
class Player
{
private:
    int Id;
    std::string Name;
    int Rang;
    std::vector<Player>players;
    
public:
    
   
  
    void CreatePlayer();
    void DeletePlayer();
    long GetPlayerById() const;
    int ShowPlayerInfo() const;
    std::string GetPlayerByName() const;
};