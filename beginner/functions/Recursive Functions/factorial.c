/**
 * C program to find factorial of any number using recursion
 */

#include <stdio.h>

unsigned long long fact(int num){
    if(num == 0) 
        return 1;
    else
        return num * fact(num - 1);
}

int main(){
    int num;
    unsigned long long factorial;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    factorial = fact(num);
    
    printf("Factorial of %d is %llu", num, factorial);
    
    return 0;
}
