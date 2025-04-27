#include <stdio.h>
int Add(int num1,int num2);

int main(){
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	printf("Sum of %d and %d is: %d",num1,num2, Add(num1,num2));
	
	return 0;
}

int Add(int num1,int num2){
	int carry;
	while(num2!=0){
		carry = num1 & num2;
		num1 = num1 ^ num2;
		num2 = carry << 1;
	}
	return num1;
}

