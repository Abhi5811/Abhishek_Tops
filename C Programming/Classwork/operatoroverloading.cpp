/*operator overloading*/
#include<iostream>
using namespace std;


class Distance
{
	public:
		double feet, inches;

	Distance(double f,double i)
	{
		feet=f;
		inches=i;
	}
	void display()
	{
		cout<<"feet:"<<feet<<"\ninches: "<<inches;
	}
};


int main()
{
	Distance di(4,5);
	di.display();
	return 0;
}