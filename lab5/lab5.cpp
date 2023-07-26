#include <iostream>
class Pair {
public:
	int* pa, * pb;
	Pair(int, int);
	Pair(const Pair&);
	~Pair();
};
Pair::Pair(int a, int b) {
	pa = new int(a);
	pb = new int(b);
}
Pair::Pair(const Pair& obj) {
	pa = new int;
	pb = new int;
	*pa = *(obj.pa);
	*pb = *(obj.pb);
}
Pair::~Pair() {
	delete pa;
	delete pb;
}
int main()
{
	Pair p(15, 16);
	std::cout << " p.pa = " << p.pa << " *(p.pa) = " << *(p.pa) << "\n";
	std::cout << " p.pb = " << p.pb << " *(p.pb) = " << *(p.pb) << "\n";
	Pair q(p);
	std::cout << " q.pa = " << q.pa << " *(q.pa) = " << *(q.pa) << "\n"; 
	std::cout << " q.pb = " << q.pb << " *(q.pb) = " << *(q.pb) << "\n";
	Pair* hp = new Pair(23, 42);
	std::cout << " hp.pa = " << hp->pa << " hp->pb = " << hp->pb << " \n";
	std::cout << " *(hp->pa) = " << *(hp->pa) << " *(hp->pb) = " << *(hp->pb) << " \n";
	delete hp;
	std::cout << " After deletion of hp:\n hp->pa = " << hp->pa << "  hp->pb = " << hp->pb << " \n";
	// the above line of code shows warning as hp has been deallocated
	std::cout << " " << "If this message is printed," << "at least the program hasn't crashed yet!\n" << " But you want to print other diagnostic messages too." << std::endl;
	return 0;

}
