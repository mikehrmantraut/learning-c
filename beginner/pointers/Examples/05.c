#include <stdio.h>

void F(int *x,int y)
{
	if(y<7)
	{
	y++;
	F(&y,*x);
	printf("\n%d %d",*x,y);
	}
	return;
}

int main()
{
	int a=4,b=4;
	F(&a,b);
	printf("\n%d %d",a,b);
	return 0;
}
