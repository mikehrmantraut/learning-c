/**
 * C program to enter student marks and find percentage and grade. According to following:
 * If percentage >= 90% : Grade A
 * If percentage >= 80% : Grade B
 * If percentage >= 70% : Grade C
 * If percentage >= 60% : Grade D
 * If percentage >= 40% : Grade E
 * If percentage < 40% : Grade F
 */

#include <stdio.h>

int main()
{
	int phy, chem, bio, math, comp;
	float per;
	
	/* input grades from user */
	printf("Please enter your physics grade.");
	scanf("%d", &phy);
	
	printf("Please enter your chemistry grade.");
	scanf("%d", &chem);
	
	printf("Please enter your biology grade.");
	scanf("%d", &bio);
	
	printf("Please enter your mathematics grade.");
	scanf("%d", &math);
	
	printf("Please enter your computer lab. grade.");
	scanf("%d", &comp);	
	
	per = (phy + chem + bio + math + comp) / 5;
	
	if (per >= 90)
		printf("Grade A");
	else if (per >= 80)
		printf("Grade B");
	else if (per >= 70)
		printf("Grade C");
	else if (per >= 60)
		printf("Grade D");
	else if (per >= 40)
		printf("Grade E");
	else 
		printf("Grade F");
	
	return 0;
}
