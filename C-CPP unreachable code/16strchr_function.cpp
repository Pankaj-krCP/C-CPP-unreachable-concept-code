/*
// C++ program to demonstrate working strchr()
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
 char str[] = "This is a string";
 char * ch = strrchr(str,'a');
 cout << ch -str + 1;
 return 0;
}
*/


/*
// C code to demonstrate the working of
// strrchr()
#include <stdio.h>
#include <string.h>
// Driver function
int main()
{
 // initializing variables
 char st[] = "GeeksforGeeks";
 char ch = 'e';
 char* val;
 // Use of strrchr()
 // returns "ks"
 val = strrchr(st, ch);
 printf("String after last %c is : %s \n", ch, val);
 char ch2 = 'm';
 // Use of strrchr()
 // returns null
 // test for null
 val = strrchr(st, ch2);
 printf("String after last %c is : %s ", ch2, val);
 return (0);
}
*/


/*
#include<iostream>
#include<cstring>

using namespace std;
int main(){
    char str[]="Rs 10000000";
    cout<<str<<endl;

    char ch='1';

    char *entire;

    entire=strchr(str,ch);

    cout<<entire<<endl;

    return 0;
}
*/

