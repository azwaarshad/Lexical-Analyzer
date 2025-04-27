#include <stdio.h>
using namespace std;
int main(){
	int Age;
	printf("Enter your age:");
	scanf("%d", &Age);
	if(Age>=40){
		printf("You are eligible for 40%% discount\n");
	}
	else if(Age>=20){
		printf("You are eligible for 20%% discount\n");
	}
	else{
		printf("Sorry! You are not eligible for discount");
	}
	return 0;
}
