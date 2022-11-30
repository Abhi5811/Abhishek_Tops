#include<iostream>
using namespace std;


class scopedemo
{
	public:
		void function()
		{
			cout<<"this is function 1";
		}
		void func();
};

void scopedemo::func()
	{
		cout<<"this is func2";	
	
	}
	class b :public scopedemo
	{
		public:
			void b1()
			{
				scopedemo::function();
			}
	};
	




int main()
{
	b ob;
	ob.function();
	ob.b1();
	ob.func();
	return 0;
}