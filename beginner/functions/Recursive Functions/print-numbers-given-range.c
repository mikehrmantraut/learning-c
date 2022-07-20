/**
 * C program to print all natural numbers from 1 to n using recursion
 */

#include <stdio.h>

void printNaturalNumbers(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
        return;
    
    printf("%d, ", lowerLimit);

    printNaturalNumbers(lowerLimit + 1, upperLimit);
}

int main()
{
    int lowerLimit, upperLimit;
 
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("All natural numbers from %d to %d are: ", lowerLimit, upperLimit);
    printNaturalNumbers(lowerLimit, upperLimit);
    
    return 0;
}


