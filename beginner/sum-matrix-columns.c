/**
 * C program to summing 3x5 matrix columns.
 * 
 * For example:
 * 
 *     -2 4 2 1 3
 *      5 3 3 2 1
 *     -3 1 2 1 2
 *    +------------
 * sum: 0 8 7 4 6
 */

#include <stdio.h>

int main()
{
	int matrix[3][5];
	int i, j;
	int sum = 0;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &matrix[i][j]);	
		}
	}
	
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 5; j++) 
		{
			printf("%d ", matrix[i][j]);
		}	
		printf("\n");
	}
	
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 3; i++)
		{
			sum += matrix[i][j];
		}
		printf("%d ", sum);
		sum = 0;
	}

	return 0;
}
