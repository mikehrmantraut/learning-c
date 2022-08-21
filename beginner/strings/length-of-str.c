// Find the length of a string

#include <stdio.h>

int strLength(char *str){
	if(*str=='\0') return 0;
	return 1 + strLength(str+1);
} 

int main(){
	char str[30];
	int len;
	
	printf("Enter a string: ");
	gets(str);
	
	printf("Length of %s is %d.", str, strLength(str));
}
