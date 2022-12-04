#include<iostream>
using namespace std;

class A{
	public:
		void msg()
		{
			cout<<"hello A";
		}
};
class B :virtual public A{
};
class C :virtual public A{
};
class D :public B,public C{
};




int main()
{
	D o;
	o.msg();
	return 0;
}