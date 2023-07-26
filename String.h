#pragma once
class String {
public:
	string str;
	String();
	String(const String &s);
	string concat(string a, string b);
	void display(string str);
};