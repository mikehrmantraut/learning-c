#include <stdio.h>

void f(int *x,int *y)
{
	if(*x<11)
	{
		(*x)++;
 		(*y)--;
 		printf("\n%d %d",*x,*y);
 		f(x,y);
 		printf("\n%d %d",*x,*y);
 	}
 	return;
}
int main()
{
	int x=7,y=9;
	f(&y,&x);
	printf("\n%d %d",x,y);
	return 0;
}
