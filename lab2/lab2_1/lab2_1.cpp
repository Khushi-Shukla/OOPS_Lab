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
    int var = setValueOne();
    setValueTwo() = 11;
    cout << "The Value of Global : " << global << endl;
    setValueOne(10);
    int num = 10;
    setValue(num);
    const int& ref = 10;
    const int& ref1 = 10;
    system("pause");
    return 0;
}
