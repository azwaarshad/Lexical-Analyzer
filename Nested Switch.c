#include <stdio.h>
int main(){
	int a,b;
	printf("1: School of Computer Science\n");
	printf("2: School of Biosciences\n");
	printf("3: School of Engineering\n");
	printf("Make your choice: ");
	scanf("%d", &a);
	
	switch(a){
		case 1:
			printf("\nAvailable courses of Computer Science!\n");
			printf("1: Programming Fundamentals\n");
			printf("2: ICT\n");
			printf("Make your selection: ");
			scanf("%d", &b);
			
			switch(b){
				case 1:
					printf("You choose Programming Fundamentals");
					break;
					
				case 2:
					printf("You choose ICT");
					break;
			}
			break;
			
			case 2:
				printf("\nAvailable courses of Biosciences!\n");
				printf("1: Physics\n");
				printf("2: Chemistry\n");
				printf("Make your selection: ");
				scanf("%d", &b);
			
				switch(b){
					case 1:
						printf("You choose Physics");
						break;
					
					case 2:
						printf("You choose Chemistry");
						break;
			}
			break;
			
			case 3:
				printf("\nAvailable courses of Engineering!\n");
				printf("1: Mathematics\n");
				printf("2: Applied Physics\n");
				printf("Make your selection: ");
				scanf("%d", &b);
				
				switch(b){
					case 1:
						printf("You choose Mathematics");
						break;
						
					case 2:
						printf("You choose Applied Physics");
						break;
				}
				break;
	}
	return 0;
}
