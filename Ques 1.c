#include <stdio.h>

int main(){
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	if(num>0 && (num&(num-1))==0){
		printf("%d is a power of two",num);
	}
	else{
		printf("%d is not a power of two",num);
	}
	
	return 0;
}
