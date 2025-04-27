#include <stdio.h>
int reverseNum(int num);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	int rev = reverseNum(num);
	printf("Reverse of %d is %d", num,rev);
	
	return 0;
}

int reverseNum(int num){
	int rev=0;
	while(num != 0){
		rev = rev*10 + num%10;
		num /= 10;
	}
	return rev;
}
