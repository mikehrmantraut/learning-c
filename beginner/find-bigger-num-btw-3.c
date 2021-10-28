/*
** C program to find maximum between three numbers.
*/

#include <stdio.h>

int main()
{
	int num1, num2, num3;
	
	/* Input first number from user */
	printf("Please enter first number.");
	scanf("%d",&num1);
	
	/* Input second number from user */
	printf("Please enter first number.");
	scanf("%d",&num2);
	
	/* Input third number from user */
	printf("Please enter first number.");
	scanf("%d",&num3);	
	
	
	if (num1>num2)
	{
		/* if num1>num2 and num1>num3 */
		if (num1>num3)
			printf("Num1 (%d) is the maximum.", num1);	
		
		/* if num1>num2 but num1<num3 */
		else
			printf("Num3 (%d) is the maximum.", num3);
	}
	else
	{
		/* if num2>num1 and num2>num3 */
		if (num2>num3)
			printf("Num2 (%d) is the maximum.", num2);
		
		/* if num2>num1 but num2<num3*/
		else
			printf("Num3 (%d) is the maximum", num3);
	}	
	return 0;
}
