/**
 * C program to find bigger number between two numbers.
 */
#include <stdio.h>

int main()
{
	int num1, num2;
	
	/* Input first number from user */
	printf("Please enter first number.");
	scanf("%d",&num1);
	
	/* Input second number from user */
	printf("Please enter second number.");
	scanf("%d",&num2);
	
	/* if first number is bigger */
	if (num1 > num2)
		printf("First number (%d) is bigger than second number (%d).", num1, num2);
	/* if second number is bigger */
	else if (num2 > num1)
		printf("Second number (%d) is bigger than first number (%d).", num2, num1);
	/* check for equality */ 
	else
		printf("These numbers are equal.");
	
	return 0;
}
