#pragma once
class ClassA
{
private:
	int privateA;
public:
	int publicA;
	ClassA();
	ClassA(int); 
	ClassA(int, int);
	int getClassA();
	int* getPrivateA();
protected:
	int protectedA;

};

