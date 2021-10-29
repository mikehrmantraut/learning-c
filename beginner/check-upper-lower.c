/**
 * C program to check whether a character is Uppercase or Lowercase.
 */

#include <stdio.h>

int main()
{
	char ch;
	
	/* input character from user */
	printf("Please enter any letter.");
	scanf("%c", &ch);
	
	/* checking lowercase */
	if (ch>='a' && ch <= 'z')
		printf("%c is LOWERCASE", ch);
	
	/* checking uppercase */
	else if (ch>='A' && ch <= 'Z')
		printf("%c is UPPERCASE", ch);
	
	else
		printf("%c is not alphabet ", ch);
	
	return 0;
}
