#include <iostream>
using namespace std;
int main(){
	int a,b;
	char Op;
	printf("Enter number 1:\n");
	printf("Enter number 2:");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("Enter operation: ");
	scanf("%s", &Op);
	if(Op == '+'){
		printf("%d + %d is equal to %d", a,b,a+b);
	}
	else if(Op == '-'){
		printf("%d - %d is equal to %d", a,b,a-b);
	}
	else if(Op == '*'){
		printf("%d * %d is equal to %d", a,b,a*b);
	}
	else if(Op == '/'){
		printf("%d / %d is equal to %d", a,b,a/b);
	}
	else{
		printf("%d % %d is equal to %d", a,b,a%b);
	}
}
