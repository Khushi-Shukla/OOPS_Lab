#include <iostream>
#include<math.h>
#define PI 3.1416
using namespace std;

class polar {
public:
	float r, a, x, y;
	polar(float r1, float a1);
	polar();
	polar operator+(polar obj1) {
		polar p;
		p.x = x + obj1.x;
		p.y = y + obj1.y;
		float xSquare = p.x * p.x;
		float ySquare = p.y * p.y;
		p.r = sqrt(xSquare + ySquare);
		p.a = atan(p.y / p.x);
		return p;
	}
	void display();

};

polar::polar(float r1, float a1) {
	r = r1;
	a = a1 * (PI / 180.0);
	x = r * cos(a);
	y = r * sin(a);
}

polar::polar() {
	//default constructor is necessary
	r = 1;
	a = 1 * (PI / 180.0);
	x = r * cos(a);
	y = r * sin(a);

}

void polar::display() {
	float deg = a * 180.0 / PI; //converting radian into degree
	cout << " Radius: " << r << "\n Angle: " << deg << endl;
}

int main()
{
	int a, b;
	cout << " Enter the first radius and angle: ";
	cin >> a >> b;
	polar p1(a, b);
	cout << " Enter the second radius and angle: ";
	cin >> a >> b;
	polar p2(a, b);
	cout << " Two object 'P1' and 'P2' of polar class is initialized\n";
	polar p3 = p1 + p2;
	cout << " P1 + P2 = " << endl;
	p3.display();
	return 0;
}
