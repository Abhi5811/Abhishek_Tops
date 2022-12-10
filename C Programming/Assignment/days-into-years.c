#include<stdio.h>

void main()
{
    int days, year;
     
    printf("Enter the number of days\n");
    scanf("%d", &days);
    
    year =(days/365);
    
    printf ("enter number of year");
    scanf("%d=",&year);
	days =(365/year);
	printf("%d=%d",days,year);
}