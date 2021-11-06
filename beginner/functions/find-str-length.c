/**
 * C program to find length of the name entered by user.
 */
 
 #include <stdio.h>
 
 int returnLength (char string[])
 {
 	int length = 0;
	int i;
 	
 	/**
	  * lets say word is "world"
	  * it will be 'w', 'o', 'r', 'l', 'd', '\0'  
	  * thats why we count until its equal to '\0'
	  */
 	for (i = 0; string[i] != '\0'; i++)
 	{
 		length++;	
	}
	
	return length;
 }
 
 int main()
 {
 	char str[1000];
 	
 	// Get a string from user.
 	printf("Please enter a string to find its length: ");
 	gets(str);
 	
	printf("Length of the %s is %d.", str, returnLength(str));
 	
 	return 0;
 }
