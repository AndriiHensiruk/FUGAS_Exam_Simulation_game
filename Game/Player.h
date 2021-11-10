#pragma once
#include <string>

class Player
{
public:
    int Id;
    std::string Name;
    int Rank;

    long getId() const;
    std::string getName() const;
    int getRank() const;

    void SetRank(int newRank);
};

