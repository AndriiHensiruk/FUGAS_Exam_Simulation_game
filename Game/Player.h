#pragma once
#include <iostream>
#include <string>
#include <vector>
<<<<<<< HEAD
<<<<<<< HEAD
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
=======



class Player
{
public:
=======



class Player
{
public:
>>>>>>> dev
    int ID;
    std::string Name;
    int Rank;


    Player()
    {}

    Player(int id, std::string name, int rank)
    {
        this->ID = id;
        this->Name = name;
        this->Rank = rank;
    };

    std::string GetName();
    int GetId();
    int GetRank();

    // add to rating 
    void SetRank(int newRank);

    friend std::ostream& operator<< (std::ostream& out, const Player& player);
};

<<<<<<< HEAD
>>>>>>> dev
=======
>>>>>>> dev
