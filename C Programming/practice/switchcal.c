#include<stdio.h>
void main()
{
	int a,b,choice;
	
	printf("***********Choice Calculator***********");
	
	printf("\nEnter A=");
	scanf("%d",&a);
	printf("\nEnter B=");
	scanf("%d",&b);
	printf("1. for addition\n2. for sub");
	printf("\nenter your choice=");
	scanf("%d",&choice);
	
	switch(choice)
	{
		 
		case 1 : printf("\nthe addition is=%d",(a+b));
				break;
		case 2 : printf("\the subtraction is=%d",(a-b));
				break;
		default : printf("invalid choice");
				break;		
	}
}