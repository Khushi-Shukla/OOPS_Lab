#include "CLassB.h"
#include<iostream>

// Q7. Define all function here.. (Don't delete this line)

//Inheriting ClassA in private

ClassBprivate :: ClassBprivate(int a, int b, int c) {
	*this->privateAVal = a;
	this->publicA = b;
	this->protectedA = c;
}

int ClassBprivate::getPvtA() {
	return *(this->privateAVal);
}

int ClassBprivate::getProA() {
	return this->protectedA;
}

int ClassBprivate::getPubA() {
	return this->publicA;
}

void ClassBprivate::displayPvtData() {
	std::cout << "this->privateA = " << *(this->privateAVal) << "\n";
	std::cout << "this->publicA = " << this->publicA << "\n";
	std::cout << "this->protectedA = " << this->protectedA << "\n";
}


//Inheriting ClassA in protected

ClassBprotected::ClassBprotected(int a, int b, int c) {
	*this->privateAVal = a;
	this->publicA = b;
	this->protectedA = c;
}

int ClassBprotected::getPvtA() {
	return *(this->privateAVal);
}

int ClassBprotected::getProA() {
	return this->protectedA;
}

int ClassBprotected::getPubA() {
	return this->publicA;
}

void ClassBprotected::displayProtectedData() {
	std::cout << "this->privateA = " << *(this->privateAVal) << "\n";
	std::cout << "this->publicA = " << this->publicA << "\n";
	std::cout << "this->protectedA = " << this->protectedA << "\n";
}



//Inheriting ClassA in public

ClassBpublic::ClassBpublic(int a, int b, int c) {
	*this->privateAVal = a;
	this->publicA = b;
	this->protectedA = c;
}

int ClassBpublic::getPvtA() {
	return *(this->privateAVal);
}

int ClassBpublic::getProA() {
	return this->protectedA;
}

int ClassBpublic::getPubA() {
	//can be accessed outside the class directly
	return this->publicA;
}


void ClassBpublic::displayPublicData() {
	std::cout << "this->privateA = " << *(this->privateAVal) << "\n";
	std::cout << "this->publicA = " << this->publicA << "\n";
	std::cout << "this->protectedA = " << this->protectedA << "\n";
}