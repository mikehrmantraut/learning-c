/*
** C program to check whether a number is divisible by 5 and 11 or not.
*/

#include <stdio.h>

int main()
{
	int num;
	
	printf("Please enter a number");
	scanf("%d", &num);
	
	/* divisible by 5 but not 11 */
	if ((num%5==0)&&(num%11!=0))
		printf("%d can divided by 5.", num);
	
	/* divisible by 11 but not 5 */	
	else if ((num%11==0)&&(num%5!=0))
		printf("%d can divided by 11.", num);
	
	/* divisible by both 5 and 11 */	
	else if ((num%5==0)&&(num%11==0))
		printf("%d can divided by both 5 and 11", num);		
	return 0;
}
