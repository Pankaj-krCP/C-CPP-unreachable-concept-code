/*
// C++ Code to explain how
// "cin.ignore(numeric_limits
// <streamsize>::max(),'\n');"
// discards the input buffer
#include<iostream>
 
// for <streamsize>
#include<ios> 
 
// for numeric_limits
#include<limits>
using namespace std;
 
int main()
{
 int a;
 char str[80];
 
 // Enter input from user
 // - 4 for example
 cin >> a;
 
 // discards the input buffer
 cin.ignore(numeric_limits<streamsize>::max(),'\n');
 
 // Get input from user -
 // GeeksforGeeks for example
 cin.getline(str, 80);
 
 // Prints 4
 cout << a << endl;
 
 // Printing string : This
 // will print string now
 cout << str << endl;
 
 return 0;
}

*/





/*
// C++ Code to explain how " cin.sync();"
// discards the input buffer
#include<iostream>
#include<ios> 
#include<limits>
using namespace std;
 
int main()
{
 int a;
 char str[80];
 
 // Enter input from user
 // - 4 for example
 cin >> a;
 
 // Discards the input buffer
 cin.sync();
 
 // Get input from user -
 // GeeksforGeeks for example
 cin.getline(str, 80);
 
 // Prints 4
 cout << a << endl;
 
 // Printing string -this
 // will print string now
 cout << str << endl;
 
 return 0;
}
*/




// C++ Code to explain how "cin >> ws"
// discards the input buffer along with
// initial white spaces of string
 
#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
 int a;
 string s;
 
 // Enter input from user -
 // 4 for example
 cin >> a;
 
 // Discards the input buffer and
 // intial white spaces of string
 cin >> ws;
 
 // Get input from user -55
 // GeeksforGeeks for example
 getline(cin, s);
 
 // Prints 4 and GeeksforGeeks :
 // will execute print a and s
 cout << a << endl;
 cout << s << endl;
 
 return 0;
}
