#include <string>
#include "Player.h"
long Player::getCurrentId() const
{
    return Id;
}

int Player::getRank() const
{
    return Rank;
}

std::string Player::getPlayerName() const
{
    return Name;
}