// Find the frequency of a character in a string
#include <stdio.h>
int main(){
	char str[1000], ch;
	int count = 0;
	int i;
	
	printf("Enter a string: ");
	gets(str);
	
	printf("Enter a character to find its frequency: ");
	scanf("%c", &ch);
	
	for(i = 0; str[i] != '\0'; i++){
		if(ch==str[i])
			++count;
	}
	
	printf("Frequency of %c = %d",ch, count);
	return 0;
}
