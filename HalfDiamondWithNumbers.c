#include<stdio.h>
main()
{
	int num_rows, row, column;
    
    scanf("%d", &num_rows);
    printf("\n");
    for(row=1; row<=num_rows-1; row++)
    {
    	for(column=1; column<=row; column++)
    	{
    		printf("%d", column);
		}
		printf("\n");
    }
    for(row=num_rows; row>=1; row--)
    {
    	for(column=1; column<=row; column++)
    	{
    		printf("%d", column);
		}
		printf("\n");
    }
    
}

