/**
* C program to check whether a character is alphabet, digit or special character.
*/

#include <stdio.h>

int main()
{
	char ch;
	
	/* Input character from user */
	printf("Please enter any character.");
	scanf("%c", &ch);
	
	
	/* alphabet check */
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		printf("%c is alphabet.", ch);
	
	/* digit check*/
	else if ((ch >= '0' && ch <='9'))
		printf("%c is digit.", ch);
	
	/* neither alphabet nor digit, then its a special character */
	else
		printf("%c is special character.", ch);
	
	return 0;
}
