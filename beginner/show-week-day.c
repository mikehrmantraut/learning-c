/**
 * C program to enter week number and print day of week.
 */

#include <stdio.h>

int main()
{
	/* declare constant name of weeks */
	const char * WEEKS [] = {
	"Monday", "Tuesday", "Wednesday", "Thursday",
	"Friday", "Saturday", "Sunday"
	};
	
	int week;
	
	/* input week from the user */
	printf("Please enter a week number (1-7)");
	scanf("%d", &week);
	
	if (week > 0 && week < 8)
	{
		/* print week name using array index */
		printf("%s", WEEKS[week-1]);
	}
	else
		printf("Invalid input! Please enter week number between 1-7.");
	
	return 0;
}
