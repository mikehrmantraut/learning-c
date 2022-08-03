#include <stdio.h>
#include <stdlib.h>

void F(int *a,int b)
{
	*a+=b;
	b+=*a;
	printf("\n%d %d",*a,b);
	return;
}
	
int main()
{
	int a=6,b=8;
	F(&b,a);
	printf("\n%d %d",a,b);
	return 0;
}
