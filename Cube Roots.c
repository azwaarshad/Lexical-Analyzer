#include <stdio.h>
void cubeByRefrence(int *nPtr);
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	printf("The original number is: %d\n", number);
	cubeByRefrence(&number);
	printf("The cube value of number is: %d", number);
}

void cubeByRefrence(int *nPtr){
	*nPtr = *nPtr * *nPtr * *nPtr;
}
