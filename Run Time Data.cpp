#include <iostream>
using namespace std;

int main(){
	int a=12, age, Age_In_Months;
	printf("Enter your age: ");
	scanf("%d", &age);
	Age_In_Months = a*age;
	printf("Your age %d in months is %d", age,Age_In_Months);
	return 0;
}
