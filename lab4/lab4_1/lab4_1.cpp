#include <iostream>
using namespace std;
#include "MyString.h"

MyString::MyString() {
	str = "";
}

MyString::MyString(string s) {
	str = s;
}

string MyString::concated(string a, string b) {
	return a + b;
}

void MyString::display(string str) {
	std::cout << str << std::endl;
}

int main()
{
	MyString s;
	MyString st("Another new string");
	s.str = " This is a string";
	cout << " s.str=" << s.str << endl;
	cout << " st.str=" << st.str << endl;
	s.display(" Displaying a string");
	cout << " The concatenation of pine and apple gives: "<<s.concated("Pine", "Apple");
	cout << "\n";
	return 0;
}
