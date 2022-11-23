#include<stdio.h>
void func1(); // Function Declaration
void func2();

void main()
{
	
	func1(); // Function Calling.
}


// Recursive Function : Calling itself.
void func1()
{
	
	printf("\nFunction1 Called");
	func2();
}


void func2()
{
	printf("\nFunction2 Called");
}