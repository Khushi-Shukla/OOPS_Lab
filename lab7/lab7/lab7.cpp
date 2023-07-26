#include <iostream>
using namespace std;
#include"Array.h"

Array::Array() {
    size=1;
    arr= new int [size];
}

Array::Array(int val) {
    size = val;
    arr = new int[size];
}

ostream& operator << (ostream& out, const Array& a){
    if (a.size == 0) {
        cout << " The array is empty\n";
        return out;
    }
    out << " The array is:\n";
    for (int i = 0; i < a.size; i++)
        out << " " << a.arr[i] ;
    cout << endl;
    return out;
}

istream& operator >> (istream& in, Array& a){
    cout << " Enter " << a.size << " integers to be stored in the Array: ";
    for (int i = 0; i < a.size; i++)
        in >> a.arr[i];
    return in;
}
Array Array::operator+(Array a) {
  
    if (a.size != size) {
        cout << " Unequal array sizes. cannot add array with different sizes\n";
        return Array(0);
    }
    Array ans(size);
    for (int i = 0; i < a.size; i++) 
        ans.arr[i] = arr[i] + a.arr[i];
    return ans;
}

Array Array::operator++() {
    for (int i = 0; i < size; i++)
        arr[i] = ++arr[i];
    return *this;
}

Array Array::operator++(int) {
    Array temp(size);
    for (int i = 0; i < size; i++) {
        temp.arr[i] = arr[i]++;
    }

    return temp;
}



int& Array::operator[](int i) {
    return arr[i];
}

int main()
{
    Array a(10), b(10); // may be initialized with a parameterized constructor having size 10
    cin >> a; //take input for array a
    cin >> b;  //take input for array b

    Array c = a + b; //addition of all array elements 
    cout << endl;

    cout << " After adding a and b: ";
    cout << c; //display array;
    cout << endl;

    cout << " After a++: ";
    cout << a++; //post increment of a
    cout << " Since it is post increment, the changes will be shown in next line. Therefore, ";
    cout << a;
    cout << endl;

    cout << " After ++a: ";
    cout << ++a; //pre increment of a
    for (int i = 0; i < 10; i++)
        a[i] = i * 2; //assigned new value to array
    cout << endl;

    cout << " After a[i]=i*2: ";
    cout << a;

    return 0;

}