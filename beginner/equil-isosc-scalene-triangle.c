/**
 * C program to check whether the triangle is equilateral, isosceles or scalene triangle.
 */

#include <stdio.h>

int main()

{
	int side1, side2, side3;
	
	printf("Please enter 3 sides of triangle.");
	scanf("%d %d %d", &side1, &side2, &side3);
	
	if (side1 == side2 && side2 == side3)
		printf("Triangle is equilateral.");
	else if (side1==side2 || side2==side3 || side1 == side3)
		printf("Triangle is isosceles.");
	else
		printf("Triangle is scalene.");
	
	return 0;
}
