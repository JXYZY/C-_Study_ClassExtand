#include "TestVirtual.h"
#include <iostream>
TestVirtual::TestVirtual()
{
	std::cout << "construct TestVirtual...." << std::endl;
}

TestVirtual::~TestVirtual()
{
	std::cout << "delete TestVirtual...." << std::endl;
}