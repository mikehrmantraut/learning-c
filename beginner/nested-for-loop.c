/**
 * C program to show matrix representation with the help of nested loop.
 */

#include <stdio.h>

int main()
{
	/*
		1 2 3
		4 5 6
		7 8 9	
	*/
	int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};						
	int i, j;
	
	for (i=0; i < 3; i++)
	{
		for (j=0; j < 3; j++)
		{
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
