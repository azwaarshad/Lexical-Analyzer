#include <stdio.h>
using namespace std;
int main(){
	int Age;
	printf("Enter age:");
	scanf("%d", &Age);
	if(Age>20){
		printf("You are eligible");
	}
	else{
		printf("Sorry! ''You are not eligible");
	}
	return 0;
}
