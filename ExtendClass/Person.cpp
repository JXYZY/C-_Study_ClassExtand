#include "Person.h"
#include <iostream>
Person::Person()
	:TestVirtual()
{
	std::cout << "construct Person....." << std::endl;
}

Person::~Person()
{
	std::cout << "delete Person....." << std::endl;
}

void Person::run()
{
	std::cout << "run ...." << std::endl;
}