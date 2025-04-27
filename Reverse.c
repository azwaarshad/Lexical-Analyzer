#include <stdio.h>
unsigned int reversedBits(unsigned int num);
void printBinary(unsigned int num);
struct Number{
	int value;
	int reversedBits;
};

int main(){
	struct Number num;
	printf("Enter a number: ");
	scanf("%d", &num.value);
	
	printf("Before reversing the bits\n");
	printf("Decimal value: %d\n", num.value);
	printf("Binary representation: ");
	printBinary(num.value);
	
	num.reversedBits = reversedBits(num.value);
	
	printf("After reversing the bits\n");
	printf("Decimal value: %d\n", num.reversedBits);
	printf("Binary representation: ");
	printBinary(num.reversedBits);
	
	return 0;
}

unsigned int reversedBits(unsigned int num){
	unsigned int numOfBits = sizeof(num)*8;
	unsigned int reversedNum = 0;
	int i;
	
	for(i=0; i<numOfBits; i++){
		if((num & (1<<i)) != 0){
			reversedNum |=1 << ((numOfBits - 1) - i);
		}
	}
	return reversedNum;
}

void printBinary(unsigned int num){
	unsigned int numOfBits = sizeof(num) *8;
	int i;
	
	for(i=numOfBits-1; i>=0; i--){
		if((num & (1<<i)) != 0){
			printf("1");
		}
		else{
			printf("0");
		}
	}
	printf("\n");
}
