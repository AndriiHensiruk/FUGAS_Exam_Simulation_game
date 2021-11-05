#pragma once
#include <string>
#include <vector>
class Player
{

    
    
    
public:
    int Id;
    std::string Name;
    int Rang;
   
  
    void CreatePlayer();
    void DeletePlayer();
    long GetPlayerById() const;
    int ShowPlayerInfo() const;
    std::string GetPlayerByName() const;
};