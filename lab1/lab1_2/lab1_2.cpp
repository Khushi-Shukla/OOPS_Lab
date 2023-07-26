#include <iostream>
#include <string>
using namespace std;
namespace Constants
{
    const int intVal = 20;
    const float floatVal = 8.82;
    const char charVal = 'K';
    const string stringVal = "ABC";
}
int main()
{ 
    cout << "Using Constants namespace\n";
    cout << "Integer constant: " << Constants::intVal << endl;
    cout << "Floating point constant: " << Constants::floatVal << endl;
    cout << "Character constant: " << Constants::charVal << endl;
    cout << "String constant: " << Constants::stringVal << endl;
    return 0;
}
