#include<stdio.h>
main()
{
	int num_rows, row, column;

    scanf("%d", &num_rows);
    printf("\n");
    for(row=1; row<=num_rows; row++)
    {
    	for(column=1; column<=row; column++)
    	{
    		printf("%d", row);
		}
		printf("\n");
    }

}
