#include <stdio.h>

void F(int *a, int b)
{
	if(*a+b<10)
	{
		printf("\n%d %d",*a,b);
		return;
	}
	(*a)--;b--;
	printf("\n%d %d",*a,b);
	F(a,b);
	printf("\n%d %d",*a,b);
	return;
}

int main()

{
	int a=10,b=5;
	F(&b,a);
	printf("\n%d %d",a,b);
	return 0;
}
