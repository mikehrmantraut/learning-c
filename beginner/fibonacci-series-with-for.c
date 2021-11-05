/**
 * C program to display Fibonacci Series with F0R L00P.
 */

#include <stdio.h>

int main()
{
	int i, n;
	
	// initialize first and second terms
	int firstTerm = 1;
	int secondTerm = 1;
	
	// initialize next term
	int nextTerm = firstTerm + secondTerm;
	
	
	// get number of terms from user
	printf("enter the number of terms: ");
	scanf("%d", &n);
	
	// print first two terms
	printf("Fibonacci series:\n%d\n%d\n", firstTerm, secondTerm);
	
	// print 3rd to nth terms
	for (i=3; i<=n; ++i){
		printf("%d\n", nextTerm);
		firstTerm = secondTerm;
		secondTerm = nextTerm;
		nextTerm = firstTerm + secondTerm;
	}
	
	return 0;
}
