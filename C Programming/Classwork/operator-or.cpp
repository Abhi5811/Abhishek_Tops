/*operator overloading */
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
	Distance operator-()
	{
		feet=-feet;
		inches=-inches;
		return Distance(feet,inches);
	}
	void display()
	{
		cout<<"feet:"<<feet<<"\ninches: "<<inches;
	}
};

int main()
{
	Distance d(4,5);
	-d;
	d.display();
	return 0;
}