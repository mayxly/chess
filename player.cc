#include "player.h"
using namespace std;

Player::Player(std::string colour, std::string name) : colour{colour}, name{name} {}

string Player::getColour() {
    return colour;
}

Player::~Player() {}
