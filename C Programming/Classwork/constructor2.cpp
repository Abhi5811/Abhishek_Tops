#include<iostream>
using namespace std;

class abhi
{
	public :
		
		abhi()
		{
			cout<<"\n\ndefault";
		}
		abhi(string fname, string lname,string email)
		{
			cout<<"\n\nparameterized\t";
			cout<<"\n\nfirst name\t"<<fname;
			cout<<"\n\nlast name\t"<<lname;
			cout<<"\n\nemail\t"<<email;
		}
		
};




int main()
{
	abhi s1("abhishek","bhatt", "abhi@123");
	abhi s2;
	
	return 0;
}