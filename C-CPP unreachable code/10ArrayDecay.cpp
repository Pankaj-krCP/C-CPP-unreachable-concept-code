// C++ code to demonstrate array decay
#include<iostream>
using namespace std;

// Driver function to show Array decay
// Passing array by value
void aDecay(int *p)
{
	// Printing size of pointer
	cout << "Modified size of array is by "
			" passing by value: ";
	cout << sizeof(p) << endl;
}

// Function to show that array decay happens
// even if we use pointer
void pDecay(int (*p)[7])
{
	// Printing size of array
	cout << "Modified size of array by "
			"passing by pointer: ";
	cout << sizeof(p) << endl;
}

int main()
{
	int a[7] = {1, 2, 3, 4, 5, 6, 7,};

	// Printing original size of array
	cout << "Actual size of array is: ";
	cout << sizeof(a) <<endl;

	// Calling function by value
	aDecay(a);
	
	// Calling function by pointer
	pDecay(&a);

	return 0;
}
