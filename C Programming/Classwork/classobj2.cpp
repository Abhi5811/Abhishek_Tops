#include<iostream>
using namespace std;

class personalDetails
{
	public:
		string fname, lname, email;
			void acceptdetails()
			{
				cout<<"\nenter your first name="<<endl;
				cin>>fname;
				cout<<"\nenter you last name"<<endl;
				cin>>lname;
				cout<<"\nenter you email"<<endl;
				cin>>email;
				
			}
			void displaydetails()
			{
				cout<<"first name :"<<fname<<endl;
				cout<<"last name :"<<lname<<endl;
				cout<<"email :"<<email<<endl;
			}
		
};





int main()
{
	personalDetails a;
	a.acceptdetails();
	a.displaydetails();
	return 0;
}