#include <stdio.h>

int func(int a, int b)
{	
	b /= 2;
	printf("a = %d, b = %d\n", b, a);
	
	return (++a)* (b--);}
	
int sub(int *a, int *b)
{	
	*a *= 2;
	printf("a = %d, b = %d\n", *a, *b);
	
	return (*a) * (*b);
}

int main()
{
	int x = 3, y = 4;
	y = func(x, y);
	printf("x = %d, y = %d\n", x, y);
	y = sub(&x, &x);
	printf("x = %d, y = %d\n", x, y);
}
