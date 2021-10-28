/**
* C program to check vowel or consonant.
*/

#include <stdio.h>

int main()
{
	int i, checker;	
	char ch; 
	char arr[11] = "aeiouAEIOU";
	
	checker = 0;
	printf("Please enter a letter.");
	scanf("%c", &ch);
	
	for (i=0; i<10; i++)
	{
		
		if (ch==arr[i]) {
			checker = 1;	
		}
		
		if (checker==1){
			printf("vowel");
			break;
		}
		else{
			printf("consonant");
			break;
		}
	}
	
	return 0;	
}
