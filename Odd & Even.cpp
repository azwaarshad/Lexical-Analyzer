#include <stdio.h>
using namespace std;
int main(){
	int Num;
	printf("Enter any number:");
	scanf("%d", &Num);
	if(Num%2==0){
		printf("%d is an even number", Num);
	}
	else{
		printf("%d is an odd number", Num);
	}
	return 0;
}
