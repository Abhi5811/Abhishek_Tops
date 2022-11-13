#include<stdio.h>

int cube(int m)
 {
 	printf("\n%d",m);
	
	return m*m*m; 
 }

void main()
{
	int a;
	printf("\nenter a :");
	scanf("%d",&a);
	
		printf("\ncube=%d",cube(a));
		

}
 