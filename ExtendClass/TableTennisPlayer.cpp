#include "TableTennisPlayer.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer()
	:Player()
{
	std::cout << "construct TableTennisPlayer....." << std::endl;
}

TableTennisPlayer::~TableTennisPlayer()
{
	std::cout << "delete TableTennisPlayer....." << std::endl;
}

void TableTennisPlayer::testUseFution()
{
	Motion();
	run();
}