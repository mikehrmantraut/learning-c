#include <stdio.h>
#include <math.h>

int reverse(int num){
	if(num)
		return((num%10) * pow(10, (int) log10(num)) + reverse(num/10));
	else return 0;
}

int main(){
	int num;
	
	printf("enter num to reverse");
	scanf("%d", &num);
	
	printf("reverse of %d is = %d", num, reverse(num));
	
	return 0;	
}
