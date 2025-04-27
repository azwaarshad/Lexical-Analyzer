#include <stdio.h>
int main(){
	int a=7, *aPtr=&a;
	
	printf("The address of a is %p\n" "The value of aPtr is %p\n", &a,aPtr);
	printf("The value of a is %d\n" "The value of *aPtr is %d", a,*aPtr);
	
	return 0;
}
