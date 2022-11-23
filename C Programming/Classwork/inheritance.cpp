//single-level inheritance
#include<iostream>
using namespace std;

class abhi
{
	public:
	int x;
	void geta(int a)
	{
		x = a;
	}
	void puta()
	{
		cout<<"\nx="<<x;
	}

};
class abhi2 :public abhi
{
	public:
	int y;
	 void getb(int b)
	 {
	 	y = b;
	 }
	 void putb()
	 {
	 	cout<<"\ny1="<<y;
	 }
	 
	
};

int main()
{
	int x,y;
	cout<<"\nenter x & y=";
	cin>>x>>y;
	abhi2 ob;
	ob.geta(x);
	ob.puta();
	ob.getb(y);
	ob.putb();	
	
}
