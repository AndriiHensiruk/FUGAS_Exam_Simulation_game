#include <string>
#include "Player.h"
long Player::getPlayerById() const
{
    return Id;
}

int Player::gettPlayerByRank() const
{
    return Rank;
}

std::string Player::getPlayerByName() const
{
    return Name;
}