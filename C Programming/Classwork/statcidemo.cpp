#include<iostream>
using namespace std;


class staticdemo
{
	public:
		static int objcount;
		
		staticdemo()
		{
			cout<<"\ndefault constructor called";
			objcount++;
		}
};
int staticdemo::objcount=0;




int main()
{
	staticdemo s1,s2,s3,s4;
	cout<<"\nobject count:"<<s1.objcount;
	return 0;
}