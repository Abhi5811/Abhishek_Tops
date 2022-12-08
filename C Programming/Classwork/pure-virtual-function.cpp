#include<iostream>
using namespace std;



class s1
{
	public :
		void f1()
		{
			cout<<"non pure virtual";
		}
		virtual void f2();
		
		
};

class s2 : public s1
{
	public:
		void f2()
		{
			cout<<"pure virtual";
		}
};

int main()
{
	s2 ss;
	ss.f1();
	ss.f2();
	
	return 0;
}