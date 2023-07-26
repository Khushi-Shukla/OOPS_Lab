#pragma once
class Array {
public:
	int size;
	int *arr;
	Array();
	Array(int val);
	friend ostream& operator << (ostream& out, const Array& a);
	friend istream& operator >> (istream& in, Array& a);
	int& operator [](int i);
	Array operator+(Array a);
	Array operator++();
	Array operator++(int a);
};