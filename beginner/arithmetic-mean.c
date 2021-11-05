/**
 * C program to calculate arithmetic mean.
 */

#include <stdio.h>

int main()
{
	float numbers[5];
	float sum = 0.0;
	int i;
	
	// input five numbers from user
	for (i=0; i < 5; i++)
	{
		printf("Please enter a number: ");
		scanf("%f", &numbers[i]);
	}
	
	// summation of all numbers in the array
	for (i=0; i<5; i++)
	{
		sum += numbers[i];
	}
	
	// summation of numbers / count of numbers
	printf("Mean: %.2f", sum / 5);
	
	return 0;
}
