/**
* C program to find number of days in month.
*/

#include <stdio.h>

int main()
{
	/* Constant number of month declarations */
	const int DAYS[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
  /* Constant month declarations */ 
  const char * MONTH[] = {
	"January", "February", "March", "April", "May","June", "July",
	"August", "September", "October", "November", "December"
	};
	
	int month;
	
  /* input month from the user */
  printf("Please enter month 1-12");
	scanf("%d", &month);
	
	if (month<13 && month>0)
		printf("%s has %d days.", MONTH[month-1], DAYS[month-1]);
	else
		printf("Please enter number between 1-12.");
	
	return 0;
}
