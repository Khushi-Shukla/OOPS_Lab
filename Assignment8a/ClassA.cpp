#include "ClassA.h"
ClassA::ClassA()
{
	this->privateA = 0;
	this->protectedA = 0;
	this->publicA = 0;
}
ClassA::ClassA(int a)
{
	this->privateA = a;
	this->protectedA = 0;
	this->publicA = 0;
}

ClassA::ClassA(int a, int b)
{
	this->privateA = a;
	this->protectedA = b;
	this->publicA = 0;
}


int ClassA::getClassA()
{
	return this->privateA;
}

int* ClassA::getPrivateA() {
	return &privateA;
}
