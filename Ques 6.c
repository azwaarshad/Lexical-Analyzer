#include <stdio.h>
int isBinary(int num);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(isBinary(num)){
		printf("%d is a binary number", num);
	}
	else{
		printf("%d is not a binary number", num);
	}
	return 0;
}

int isBinary(int num){
	while(num>0){
		if(num%10>1){
			return 0;
		}
		num /= 10;
	}
	return 1;
}
