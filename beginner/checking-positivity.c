/*
** C program to check whether a number is negative, positive or zero.
*/

#include <stdio.h>

int main()
{
	int num;
	
	printf("Please enter a number");
	scanf("%d", &num);
	
	if (num > 0)
		printf("%d is a POSITIVE number.", num);
	
	else if (num < 0)
		printf("%d is a NEGATIVE number.", num);
	
	else
		printf("%d is ZERO.", num);
	
	return 0;
}
