#pragma once
#include "Person.h"
class Player:protected Person
{
public:
	Player();
	~Player();
protected:
	void Motion();
};