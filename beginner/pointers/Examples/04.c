#include <stdio.h>

void F(int *a, int b)
{
	(*a)--;b+=2;
	if(*a+b<12) return;
	(*a)--;b--;
	printf("\n%d %d",*a,b);
	F(&b,*a);
	(*a)++;b++;
	printf("\n%d %d",*a,b);
	return;
}

int main()
{
	int b=6;
	F(&b,b);
	printf("\n%d",b);
	return 0;
}
