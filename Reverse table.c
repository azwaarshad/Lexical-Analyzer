#include <stdio.h>
int main(){
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	int i;
	for(i=10; i>=1; i--){
		printf("%d * %d = %d\n", num,i,num*i);
	}
	return 0;
}
