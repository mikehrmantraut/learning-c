/**
 * C program to find digits and its summation.
 */

#include <stdio.h>

int main()
{
	int n, digit=0, sum=0;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	do 
	{
		/* For example, let's say our number is 1234. 
		the below action will get the mod of 1234 
		and the result will be 4. */
		sum += (n % 10);
		
		// increments the digit by one at each phase of the loop.
		digit ++;
		
		// 1234 -> 123 -> 12 -> 1 -> 0
		n = n / 10;
			
	}
	
	while (n > 0);
	
	printf("Sum of digits: %d and %d digits.", sum, digit);

	return 0;
}
