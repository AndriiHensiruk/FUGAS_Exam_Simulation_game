#pragma once
#include <string>
#include <vector>
class Player
{
private:
    int Id;
    int Rank;
    std::string Name;
    int numNames;
    std::vector<std::string> nContainer;
    
public:
    
   
    Player();
  
    ~Player();
  
    std::string CreatePlayer();
    void DeletePlayer();
    long GetPlayerById() const;
    int ShowPlayerInfo() const;
    std::string GetPlayerByName() const;
};