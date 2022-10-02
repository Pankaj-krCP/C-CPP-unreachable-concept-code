/*
// Tokenizing a string using stringstream
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
 string line = "GeeksForGeeks is a must try";
 
 // Vector of string to save tokens
 vector <string> tokens;
 
 // stringstream class check1
 stringstream check1(line);
 
 string intermediate;
 
 // Tokenizing w.r.t. space ' '89
 while(getline(check1, intermediate, ' '))
 
{
 tokens.push_back(intermediate);
 
}
 
 // Printing the token vector
 for(int i = 0; i < tokens.size(); i++)
 cout << tokens[i] << '
\n';
}
*/



/*
// C/C++ program for splitting a string
// using strtok()
#include <stdio.h>
#include <string.h>
 
int main() {
 char str[] = "Geeks-for-Geeks";
 
 // Returns first token
 char *token = strtok(str, "-");
 
 // Keep printing tokens while one of the
 // delimiters present in str[].
 while (token != NULL)
 
{
 printf("%s\n", token);
 token = strtok(NULL, "-");
 
}
 
 return 0;
}
*/



// C code to demonstrate working of
// strtok
#include <string.h>
#include <stdio.h>
 
// Driver function
int main()
{
// Declaration of string
 char gfg[100] = " Geeks - for - geeks - Contribute";
 
 // Declaration of delimiter
 const char s[4] = "-";
 char* tok;
 
 // Use of strtok
 // get first token
 tok = strtok(gfg, s);
 
 // Checks for delimeter
 while (tok != 0) {
 printf(" %s\n", tok);
 // Use of strtok
 // go through other tokens
 tok = strtok(0, s);
 }
 
 return (0);
}