/**
 * A C program that copies its input to its output one character at a time.
 */

#include <stdio.h>

int main()
{
	int c;
	
	c = getchar();
	
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

	return 0;
}
