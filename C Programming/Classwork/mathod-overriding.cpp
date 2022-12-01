#include<iostream>
using namespace std;

class A
{
	public:
		void show()
		{
			cout<<"\nshow from a";
		}
};
class B : public A
{
	public:
		void show()
		{
			A::show();
			cout<<"\nshow from b";
		}
};
class C :public B 
{
	public:
		void show()
		{
			B::show();
			cout<<"\nshow from c";
		}
};




int main()
{
	C o;
	o.show();
	return 0;
}