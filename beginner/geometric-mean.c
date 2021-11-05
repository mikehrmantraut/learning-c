/**
 * C program to calculate the geometric mean of n elements in an array
 */

#include <stdio.h>
#include <math.h>

int main()
{
 float a[50], product=1;
 int i, n;
 
 printf("\n How many numbers you want to enter :");
 scanf("%d", &n);
 
 for(i = 0; i < n; i++)
 {
  printf("\n Enter Value at Position [%d] : ", i+1);
  scanf("%f", &a[i]);
  
  product = product * a[i];
 }
 printf("\n Geometric Mean = %.3f", pow(product, (1.0/n)));

 return 0;
}
