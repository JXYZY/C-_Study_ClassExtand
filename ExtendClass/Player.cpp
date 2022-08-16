#include "Player.h"
#include <iostream>
Player::Player()
{
	std::cout << "construct Player....." << std::endl;
}

Player::~Player()
{
	std::cout << "delete Player....." << std::endl;
}

void Player::Motion()
{
	run();
}