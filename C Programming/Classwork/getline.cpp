#include<iostream>
using namespace std;

class Accept{
	public:
		string name;
		void getnmae()
		{
			cout<<"enter name:";
			getline(cin,name);
		}
		void display()
		{
			cout<<"name is="<<name;
		}
};

int main()
{
	Accept o;
	o.getnmae();
	o.display();
	return 0;
}