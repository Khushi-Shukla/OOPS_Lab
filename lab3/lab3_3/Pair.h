#pragma once
class Pair {
public:
	int first, second;
	void check() {
		first = 5;
		std::cout << "Congratulations! The check() method of the Pair class \n has executed.(But, this isn't enough to guarantee in that your code is correct.)" << std::endl;
	}
	static Pair* pairFactory() {
		Pair* p = new Pair;
		return p;
	}

};