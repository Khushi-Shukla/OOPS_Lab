#include<iostream>
using namespace std;
void func()
{
    int num = 20;
    cout << "num in func(): " << num << endl;
    cout << "&num in func(): " << &num << endl;
}

int main()
{
    int num = 11;
    cout << "num in main(): " << num << endl;
    cout << "&num in main(): " << &num << endl;
    func();
    return 0;
}
