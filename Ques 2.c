#include <stdio.h>

int main(){
	int num, remainder, newNum, reversedNum=0;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	newNum = num;
	
	while(num!=0){
		remainder = num%10;
		reversedNum = reversedNum * 10 + remainder;
		num = num/10;
	}
	
	if(newNum == reversedNum)
		printf("%d is a palindrome number",newNum);
	else
		printf("%d is not a palindrome number",newNum);
		
	return 0;
}
