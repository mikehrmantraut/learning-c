#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

void push(int i);
int pop(void);

int *top_of_stack, *p1, stack[SIZE];

int main(void)
{
    int value;
    top_of_stack = stack;
    p1 = stack;
    do{
        printf("Enter value: ");
        scanf("%d", &value);
        if (value != 0) push(value);
        else printf("value on top is %d\n", pop());
    } while (value != -1);

    return (0);
}

void push(int i)
{
    p1++;
    if (p1 == top_of_stack + SIZE) {
        printf("Stack Overflow. \n");
        exit(1);
    }
    *p1 = i;
}

int pop(void)
{
    if (p1 == top_of_stack){
        printf("Stack Underflow.\n");
        exit(1);
    }
    p1--;
    return *(p1+1);
}
