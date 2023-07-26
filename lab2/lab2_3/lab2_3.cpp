#include<iostream>
using namespace std;
int* func1()
{
    int x = 10;
    return &x;
}

void func2()
{
    int y = 30;
    cout << "y in func()2: " << y << endl;
}

int main()
{
    int* var = func1();
    cout << "Value returned from func1(): " << *var << endl;
    func2();
    cout << "Value returned from func1(): " << *var << endl;
}
