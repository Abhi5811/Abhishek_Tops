/*mathdo overloading*/
#include<iostream>
using namespace std;

int func1()
{
	return 10;
}
int func1(int a)
{
	if(a%2==0)
	{
		cout<<"even no";
		return a;
	}
	else
	{
		cout<<"odd no";
		return a;
	}
}
void func1(int n1,int n2)
{
	int add=n1+n2;
	cout<<"addition :"<<add;
}
int main()
{
	cout<<func1();
	cout<<func1(10);
	func1(20,40);
	return 0;
}