#include<iostream>
using namespace std;
int add();
int div();
int sub();
int mul();

int main()

{
	
	
	
	int choice;
	cout<<"\n1. for addition\n2. for subtraction\n3. for multiply\n4. for div\nenter your choice=";
		cin>>choice;
		int a,b;
	cout<<"enter a=";
	cin>>a;
	cout<<"enter b=";
	cin>>b;
    
	
	

switch(choice)
	{
		
		

		case 1 :add();
		       break;
		case 2 :sub();
		       break;
		case 3 :mul();
		       break;
		case 4  :div();
		       break;
	    default :cout<<"invalid choice";
		        break;	
		        
	}
}
	
int add()
{
	int a,b;
	cout<<"addition is ="<<a+b<<endl;
    return 0;
}
int div()
{
	int a,b;
	
    cout<<"div is ="<<a/(float)b<<endl;
    return 0;
}
int sub()
{
	int a, b;
	
    cout<<"sub is ="<<a-b<<endl;
    return 0;
}

int mul()
{
	int a,b;	
    cout<<"mul is ="<<a*b<<endl;
    return 0;
}

	

