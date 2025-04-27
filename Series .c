#include <stdio.h>
int main(){
	int i=0;
	if(i%2==0){
		do{
			printf("%d\n", i);
			i=i+2;
		}
		while(i<=100);
	}
	else if(i%2==1){
		do{
			printf("%d\n", i);
			i=i+2;
		}
		while(i<=100);
	}
	else{
		printf("Error");
	}
	
	return 0;
}
