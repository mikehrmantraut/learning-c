/**
* C program to check Leap Year.
*/

#include <stdio.h>

int main()
{
	int year;
	
	/* input year from user*/
	printf("Please enter a year");
	scanf("%d", &year);
	
	/*
     * If year is exactly divisible by 4  and year is not divisible by 100
     * or year is exactly divisible by 400 then
     * the year is leap year.
     * Else year is normal year
     */
	  
	if ((year%4==0)&&(year%100!=0))
		printf("%d is a leap year.", year);
	else if (year%400==0)
		printf("%d is a LEAP year.", year);
	else
		printf("%d is a COMMON year.", year);
	
	return 0;
}
