#include<stdio.h>

void main()
{
		int arr1[4][4],arr2[4][4];
		int i, j;
		printf("\n*******array1:********");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\nenter index :[%d][%d]:",i,j);
			scanf("%d",&arr1[i][j]);
		}

	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\nenter index [%d][%d]:%d",i,j,arr1[i][j]);
		}
	}
		 printf("\n\n\n*******array2:********");

	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\nenter index :[%d][%d]:",i,j);
			scanf("%d",&arr2[i][j]);
		}

	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\nenter index [%d][%d]:%d",i,j,arr2[i][j]);
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\n***********addition******** [%d][%d]:%d",i,j,arr1[i][j]+arr2[i][j]);
		}
	}


}