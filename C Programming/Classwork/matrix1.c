#include<stdio.h>

void main()
{
	int matrix1[4][4],matrix2;
	int i,j;
	
	printf("**********enter values********");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\nenter%d%d:",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("**********enter values********");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\nenter%d%d:",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	
	
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",matrix1[i][j]);		
		}
			printf("\n");
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",matrix2[i][j]);		
		}
			printf("\n");
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",matrix2[i][j]-matrix2[i][j]);		
		}
			printf("\n");
	}
	
	
	
}