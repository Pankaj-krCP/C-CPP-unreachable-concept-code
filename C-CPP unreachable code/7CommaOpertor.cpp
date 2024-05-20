/*
1) Comma as an operator: 
The comma operator (represented by the token, ) is a binary operator 
that evaluates its first operand and discards the result, it then evaluates
the second operand and returns this value (and type).

int i = (5, 10);         10 is assigned to i
int j = (f1(), f2());    f1() is called (evaluated) first followed by f2().
					     The returned value of f2() is assigned to j 


2) Comma as a separator: 
Comma acts as a separator when used with function calls and definitions,
function like macros, variable declarations, enum declarations, and similar constructs. 

int a = 1, b = 2;
void fun(x, y);

Comma acts as a separator here and doesn't enforce any sequence.
	Therefore, either f1() or f2() can be called first 
void fun(f1(), f2());

*/

/*
// PROGRAM 1
#include <stdio.h>
int main()
{
    int x = 10;
    int y = 15;
 
    printf("%d", (x, y));
    getchar();
    return 0;
}
*/

/*
// PROGRAM 2:  Thanks to Shekhu for suggesting this program
#include <stdio.h>
int main()
{
    int x = 10;
    int y = (x++, ++x);
    printf("%d", y);
    getchar();
    return 0;
}
*/

/*
// PROGRAM 3: Thanks to Venki for suggesting this program
#include <stdio.h>
int main()
{
	int x = 10, y;

	// The following is equivalent
	// to y = x + 2 and x += 3,
	// with two printings
	y = (x++,
		printf("x = %d\n", x),
		++x,
		printf("x = %d\n", x),
		x++);

	// Note that last expression is evaluated
	// but side effect is not updated to y
	printf("y = %d\n", y);
	printf("x = %d\n", x);

	return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main()

{

	int a = 5;

	a = 2, 3, 4;

	cout << a;

	return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
	cout << "First Line\n",
		cout << "Second Line\n",
		cout << "Third Line\n",
		cout << "Last line";
	return 0;
}
*/