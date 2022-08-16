#pragma once
#include "TestVirtual.h"
class Person :public TestVirtual
{
public:
	Person();
	~Person();
	void run();
};