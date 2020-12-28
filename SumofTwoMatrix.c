#include<stdio.h>
main()
{
	int a[3][3], b[3][3], c[3][3], i, j;
	
	printf("Enter matrix a: \n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter matrix b: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("b[%d][%d] = ", i, j);
			scanf("%d", &b[i][j]);
	    }
	}
   	for(i=0; i<3; i++)
	{	for(j=0; j<3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
	    }
	}
	
	printf("Sum of matrix a+b = \n");
	for(i=0; i<3; i++)
	{ 
	   printf("\n");
	   for(j=0; j<3; j++)
		{
			printf("%d\t", c[i][j]);
		}
	}
	
}
