// clarray.cpp
// creates array class
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Array //models a normal C++ array
{
private:
	int* ptr; //pointer to Array contents
	int size; //size of Array

	//used to copy the values of one array to another. Declared privately because there is no need to call it outside the class
	void copyValues(const Array &obj) {
		for (int i = 0; i < obj.size; i++) {
			ptr[i] = obj.ptr[i];
		}
	}
public:

	Array() {
		size = 0;
		ptr = NULL;
	}

	Array(int s) //one-argument constructor
	{
		size = s; //argument is size of Array
		ptr = new int[s]; //make space for Array
	}



	~Array() //destructor
	{
		delete[] ptr;
	}
	int& operator [] (int j) //overloaded subscript operator
	{
		return *(ptr + j);
	}

	Array(const Array& obj) {
		size = obj.size;
		ptr = new int[size];
		copyValues(obj);

	}

	Array& operator=(const Array& obj) {
		try {
			if (obj.size != size) {
				//cout << "Cannot assign array! the size is different!";
				throw size;
			}
			else {
				copyValues(obj);
			}
		}
		catch (int size) {
			cout << "\nThe current array is of size " << size << " and the array given by the user is of size " << obj.size << "\nNo assignment is possible";
		}
		
		return *this;
	}


	//a getsize function to access the size of the array
	int getSize() {
		return size;
	}
};
////////////////////////////////////////////////////////////////
int main()
{
	const int ASIZE = 10; //size of array
	Array arr(ASIZE); //make an array
	for (int j = 0; j < ASIZE; j++) //fill it with squares
		arr[j] = j * j;
	for (int j = 0; j < ASIZE; j++) //display its contents
		cout << arr[j] << " ";
	cout << endl;


	//using copy constructor here to assign the ptr of new obj to the arr object
	Array arr2(arr);

	//displaying the address of of arr2 and arr to show that they are located in different positions
	cout << "\n&arr2 = " << &arr2 << " &arr = " << &arr << endl;

	//displaying the contents of the new array made using copy constructor
	cout << "\ndisplaying the contents of the new array made using copy constructor:\n";
	for (int j = 0; j < ASIZE; j++)
		cout << arr2[j] << " ";
	cout << endl;


	//using the overloaded assignment operator here
	Array ans(10);
	ans = arr;
	//displaying the contents of the new array made using assignment overloading
	cout << "\ndisplaying the contents of the new array made using assignment overloading:\n";
	for (int j = 0; j < ans.getSize(); j++) 
		cout << ans[j] << " ";
	cout << endl;

	//displaying the address of of ans and arr to show that they are located in different positions
	cout << "\n&ans = " << &ans << " &arr = " << &arr << endl;

	//using array of different size will display a message (due to exception handling
	Array ans2(1);
	ans2 = arr;
	cout << "\nThis loop will show garbage values because array of different sizes are taken" << endl;
	for (int j = 0; j < ans2.getSize(); j++) //display its contents
		cout << ans2[j] << " ";
	cout << endl;

	


	return 0;
}