/**
 * C program to find factorial by using functions.
 */

#include <stdio.h>

// the factorial function we defined
int factorial(int num)
{
	int mlp = 1, i = 1;
	
	for (; i <= num; i++)
	{
		mlp *= i;
	}
	return mlp;
}

// main function
int main()
{
	int n;
	
	printf("Enter the number whose factorial you want to find: ");
	scanf("%d", &n);
	
	// shows error if the user enters a negative integer
	if (n < 0)
		printf("Error! Please enter a positive num.");
	else
		printf("%d! is equal to %d.", n, factorial(n));
	
	return 0;
}
