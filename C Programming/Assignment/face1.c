#include<stdio.h>
void main()
{
	int i, fact=1, value;
	printf("*********factorial program*********");
	printf("\nenter the value=");
	scanf("%d",&value);
	for(i=1;i<=value;i++)
	{
		fact=fact*i;
	}
	printf("the factorial is=%d",fact);
}