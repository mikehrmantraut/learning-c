#include <stdio.h>

void f(int x,int *y)
{
	int temp;
	temp=x;x=*y;
	*y=temp;
	printf("\n%d %d",x,*y);
	return;
}

int main()
{
	int x=7,y=9;
	f(y,&x);
	printf("\n%d %d",x,y);
	return 0;
}
