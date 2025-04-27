#include <stdio.h>
using namespace std;
int main(){
	int num1, num2, sum;
	printf("Enter first number:\n");
	scanf("%d", &num1);
	printf("Enter second number:\n");
	scanf("%d", &num2);
	sum = num1 + num2;
	printf("Sum is %d", sum);
	return 0;
}
