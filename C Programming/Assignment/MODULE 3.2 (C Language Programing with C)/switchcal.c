#include<stdio.h>
void main()
{
	int a,b,choice;
	
	printf("***********Menu***********");
	printf("\n1. Addition\n2. substraction\n3. multiplication\n4. division\n");
	printf("\nEnter your choice=");
	scanf("%d",&choice);

	
	printf("\nEnter first number=");
	scanf("%d",&a);
	printf("\nEnter second number=");
	scanf("%d",&b);
	
		
	switch(choice)
	{
		 
		case 1 : printf("\nTthe addition is=%d",(a+b));
				break;
		case 2 : printf("\nThe subtraction is=%d",(a-b));
				break;
		case 3 : printf("\nThe multiplication is=%d",(a*b));
				break;
		case 4 : printf("\nThe division is=%.2f",(a/(float)b));
				break;
		default : printf("invalid choice !!!");
				break;		
	}
}