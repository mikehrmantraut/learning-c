/**
 * C program to find sum of squares up to input value.
 */

#include <stdio.h>

int main()
{
	int total, i, n;
	
	printf("Please enter a number (n) to find its sum of squares.(1 to n)");
	scanf("%d", &n);
	
	for (i=1; i<n+1; i++)
		total += i*i;
	
	printf("Total:%d", total);
	
	return 0;
}
