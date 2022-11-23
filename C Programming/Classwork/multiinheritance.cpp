//multi-level inheritance
#include<iostream>
using namespace std;

class x
{
	public:
		int a;
		void getA(int x)
		{
			a=x;
		}
		void putA()
		{
			cout<<"\na"<<a;
		}
		
};

class y :public x
{
	public:
	int b;
		
		void getB(int y)
		{
			b=y;
		}
		void putB()
		{
			cout<<"\nb="<<b;
		}
};

class z :public y  
{
	public:
		int c;
		void getC(int z)
		{
			c=z;
			
		}
		void putC()
		{
			cout<<"\nc="<<c;
		}
		
};


int main()
{
	int a,b,c;
	cout<<"\nenter A, b, c=";
	cin>>a>>b>>c;
	z o;
	o.getA(a);
	o.putA();
	o.getB(b);
	o.putB();
	o.getC(c);
	o.putC();
}