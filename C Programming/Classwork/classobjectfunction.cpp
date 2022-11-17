#include<iostream>
using namespace std;
int function(int a, int b)
{
	return a+b;
}
int main()
{
	int n,i;
	cout<<"enter no=";
	cin>>n>>i;
	cout<<function(n,i);
	return 0;
}