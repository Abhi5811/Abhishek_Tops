#include<stdio.h>

int add(int k1, int k2)
{
	printf("\n%d",k1);
	printf("\n%d",k2);
	return k1+k2;
}

void main()
{
	int a=10,b=20;
	printf("\nadd=%d",add(a,b));
}