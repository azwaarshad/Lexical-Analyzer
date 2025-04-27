#include <stdio.h>
#include <math.h>
int main(){
	int num, newNum, remainder, number=0, answer=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	newNum = num;
	
	while(newNum != 0){
		newNum /= 10;
		++number;
	}
	newNum = num;
	
	while(newNum != 0){
		remainder = newNum % 10;
		answer += pow(remainder,number);
		newNum /= 10;
	}
	if(answer == num){
		printf("%d is an Armstrong number", num);
	}
	else{
		printf("%d is not an Armstrong number", num);
	}
	return 0;
}
