#include <stdio.h>
#include <math.h>
int main(){
	int num;
	
	printf("Enter any number(1-4): ");
	scanf("%d", &num);
	
	switch(num){
		case 1:{
			printf("Square root of number is: %d",sqrt(num));
			break;
		}
		
		case 2:{
			printf("Cube of numbers is: %d",num*num*num);
			break;
		}
		
		case 3:{
			int i;
			for(i=1; i<=50; i++){
				printf("My name is Azwa Arshad\n");
			}
			break;
		}
		
		case 4:{
			int i;
			for(i=1; i<=10; ++i){
				printf("%d * %d = %d\n", num,i,num*i);
			}
			break;
		}
		default:{
			printf("Invalid choice");
			break;
		}
		
	}
	return 0;
}
