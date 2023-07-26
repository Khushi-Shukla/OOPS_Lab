#include <iostream> 


using namespace std;

int setValueOne()
{
	return 8;
}


int global = 10;


int& setValueTwo()
{
	return global;
}


int setValueOne(const int& x)
{
	return x;
}


int setValue(int& x)
{
	return x;
}




int main()
{


	setValueOne() = 12;   //Explain why if error and why if not?


	setValueTwo() = 11;  //Explain why if error and why if not?


	cout << "The Value of Global : " << global << endl;  //Explain why if error and why if not?


	setValueOne(10);  //Explain why if error and why if not?


	setValue(10);  //Explain why if error and why if not?


	const int& ref = 10;   //Explain why if error and why if not?


	int& ref1 = 10;


	system("pause"); //Explain why if error and why if not?


	return 0;
}