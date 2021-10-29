/**
 * C program to check whether a triangle is valid or not, using logical AND operator
 */

#include <stdio.h>

int main()
{
    int side1, side2, side3;

    /* Input all three sides of a triangle */
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);

    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}
