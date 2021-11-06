/**
 * C program that checks whether the number inputted by the user is prime or not.
 */
#include <stdio.h>

int primeNum(int num)
{
	int i;
	
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;	
}

int main()
{
	int n;
	printf("Please enter a num: ");
	scanf("%d", &n);
	
	if (primeNum(n) == 0)
		printf("%d is not a prime number.", n);

	else
		printf("%d is a prime number.", n);

	return 0;
}
