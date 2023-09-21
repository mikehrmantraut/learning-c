#include <stdio.h>

#define SIZE 5
// #X = gets variable name
// we can not do this with normal function 
#define PRINT_VAR(X)\
    printf(#X " is : %d at address %p\n", X, &X);

int main(void)
{
  int a = SIZE;
  PRINT_VAR(a);
  return (0);
}
