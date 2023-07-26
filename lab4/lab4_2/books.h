#pragma once
class books {
public:
	int stock[20];
	string author[20], title[20], publisher[20];
	float price[20];
	int searchBook(string auth, string titl);
	void displayDetail(int idx);
	void checkCopyCalcPrice(int idx, int copy);
};