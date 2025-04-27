#include <stdio.h>
int countBits(int num);
int main(){
	int num, count;
	printf("Enter a number: ");
	scanf("%d", num);
	
	count = countBits(num);
	printf("The bits in %d is %d", num, count);
	
	return 0;
}

int countBits(int num){
	int count = 0;
	while(num != 0){
		if(num & 1){
			count++;
		}
		num >>= 1;
	}
	return count;
}
