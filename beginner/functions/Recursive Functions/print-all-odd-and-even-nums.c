/** 
 * C program to print even or odd numbers in given range using recursion
 */

#include <stdio.h>

void printEvenOdd(int cur, int limit){
	if (cur <= limit){
		printf("%d\n",cur);
		printEvenOdd(cur + 2 , limit);}
}

int main(){

	int cur, limit;

	printf("Please enter current number: ");
	scanf("%d", &cur);
	printf("Please enter last number: ");
	scanf("%d", &limit);
	
	if (cur%2==0){
		printf("All even numbers from %d to %d is: \n", cur, limit);
		printEvenOdd(cur, limit);
	}
	
	else {
		printf("All odd numbers from %d to %d is: \n", cur, limit);
		printEvenOdd(cur, limit);
	}
}
