#include <iostream>
using namespace std;
namespace Main {
    int main() {

        cout<< 20 <<"\n";
      
        return 0;
    }
}
int main() {
    using namespace Main;
    int a = Main :: main();
    cout << a << "\n" ;
    cout << "Hello\n" ;
   
    return 0;
}