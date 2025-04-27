#include <iostream>
using namespace std;

int main(){
	float Temp_In_Fahrenheit, Temp_In_Celcius;
	printf("Enter temperature in Fahrenheit: ");
	scanf("%f", &Temp_In_Fahrenheit);
	Temp_In_Celcius = (Temp_In_Fahrenheit - 32)* 5/9;
	printf("%f in Celcius is %f", Temp_In_Fahrenheit, Temp_In_Celcius);
	return 0;
}
