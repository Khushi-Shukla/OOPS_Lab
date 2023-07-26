#pragma once
#include"ClassA.h"
class ClassBprivate : ClassA
{
	int* privateAVal = this->getPrivateA();
public:
	//Q1. Define constructor class to initialize all the data meber of CLassBprivate. (Don't delete this line)
	ClassBprivate(int, int, int);
	//Q2. Define fnction to return data members of ClassBprivate; (Don't delete this line)
	void displayPvtData();
	int getPvtA();
	int getProA();
	int getPubA();

};

class ClassBprotected : protected ClassA
{
	int* privateAVal = this->getPrivateA();
public:
	//Q3. Define constructor class to initialize all the data meber of CLassBpotected. (Don't delete this line)
	ClassBprotected(int, int, int);
	//Q4. Define fnction to return data members of ClassBprotected; (Don't delete this line)
	void displayProtectedData();
	int getPvtA();
	int getProA();
	int getPubA();

};

class ClassBpublic : public ClassA
{
	int* privateAVal = this->getPrivateA();
public:
	//Q5. Define constructor class to initialize all the data meber of CLassBpublic. (Don't delete this line)
	ClassBpublic(int, int, int);
	//Q6. Define fnction to return data members of ClassBpublic; (Don't delete this line)
	void displayPublicData();
	int getPvtA();
	int getProA();
	int getPubA();

};

