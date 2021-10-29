/**
 * C program check whether a number is even or odd.
 */

#include <stdio.h>
int main()
{
	int num;
	
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	/* if number can divided by 2 than its even */
	if(num%2==0)
		printf("%d is even number.", num);
	
	/* if number can not divided by 2 than its odd */
	else
		printf("%d is odd number.", num);
	
  return 0;
}
