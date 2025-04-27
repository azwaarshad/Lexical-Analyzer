#include <stdio.h>

int main(){
	int num, i, j, primeNum;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i=2; i<=num; i++){
		primeNum = 1;
		for(j=2; j<i/2; j++){
			if(i%j==0){
				primeNum=0;
				break;
			}
		}
		if(primeNum=1)
			printf("%d is a prime number\ns", i);
	}
	return 0;
}
