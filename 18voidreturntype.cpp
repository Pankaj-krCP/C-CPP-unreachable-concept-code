/*
//A void fun() can return another void function
// C++ code to demonstrate void()
// returning void()
#include<iostream>
using namespace std;
 
// A sample void function
void work()
{
 cout << "The void function has returned "
 " a void() !!! \n";
}
 
// Driver void() returning void work()
void test()
{
 // Returning void function
 return work();
}
 
int main()
{
 // Calling void function
 test();
 return 0;
}
*/



/*
//A void() can return a void value.
// C++ code to demonstrate void()111
// returning a void value
#include<iostream>
using namespace std;
 
// Driver void() returning a void value
void test()
{
 cout << "Hello"; 
 
 // Returning a void value
 return (void)"Doesn't Print";
}
int main()
{ 
 test();
 return 0;
}
*/