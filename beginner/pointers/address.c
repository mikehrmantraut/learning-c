#include <stdio.h>
int main()
{
    int a,i;
    char c;
    double x[5];
    int y[10];
    printf("The adress of a variable:%X\n",&a);
    printf("The adress of c variable:%X\n",&c);
    printf("The adress of x variable:%X\n",x);
    printf("The adress of x[0] variable:%X\n",&x[0]);
    printf("The adress of x[1] variable:%X\n",&x[1]);
    for(i=0;i<10;i++)
        printf("The adress of y[%d] is %x\n",i,&y[i]);
    return 0;
}
