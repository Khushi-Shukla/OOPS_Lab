#include <iostream>
using namespace std;
class FLOAT {
public:
    float val;

    FLOAT operator+(FLOAT obj){
        FLOAT ans;
        ans.val = val + obj.val;
        return ans;
    }

    FLOAT operator-(FLOAT obj){
        FLOAT ans;
        ans.val = val - obj.val;
        return ans;
    }

    FLOAT operator*(FLOAT obj){
        FLOAT ans;
        ans.val = val * obj.val;
        return ans;
    }

    FLOAT operator/(FLOAT obj){
        FLOAT ans;
        ans.val = val / obj.val;
        return ans;
    }

};

int main()
{
    FLOAT X, Y;
    X.val = 4.2;
    Y.val = 2.1;
    FLOAT addResult = X + Y;
    FLOAT subtractResult = X - Y;
    FLOAT multiplyResult = X * Y;
    FLOAT divideResult = X / Y;
    cout << " Two 'FLOAT' objects 'X' and 'Y' are initialized.\n";
    cout << " X = " << X.val << " Y = " << Y.val << endl;
    cout << " X + Y = " << addResult.val << "\n" << " X - Y = " << subtractResult.val << "\n" << " X * Y = " << multiplyResult.val << "\n" << " X / Y = " << divideResult.val << endl;
    return 0;
}