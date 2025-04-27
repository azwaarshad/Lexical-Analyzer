#include <iostream>
using namespace std;

int main(){
	int Num1, Num2, Sum, Product;
	printf("Enter two integers:\n");
	scanf("%d %d", &Num1, &Num2);
	Sum = Num1+Num2;
	Product = Num1*Num2;
	printf("Sum of %d and %d is %d", Num1, Num2, Sum);
	printf("\nProduct of %d and %d is %d", Num1, Num2, Product);
	return 0;
}
