#include <string>
#include "Player.h"
long Player::getId() const
{
    return Id;
}

int Player::getRank() const
{
    return Rank;
}

std::string Player::getName() const
{
    return Name;
}

void Player::SetRank(int newRank)
{
    Rank = newRank;
}