#include <iostream>
using namespace std;
int main(){
	int a,b;
	printf("1: Computer Science\n");
	printf("2: Biosciences\n");
	printf("3: Engineering\n");
	printf("Make your selection!\n");
	scanf("%d", &a);
	switch(a){
		case 1:
			{printf("Avaialable Courses!\n");
			printf("1: Programming Fundamentals\n");
			printf("2: ICT\n");
			printf("3: Calculus\n");
			scanf("%d", &b);
			switch(b){
				case 1:
					printf("You choose %d",b);
					break;
					
					case 2:
						printf("You choose %d",b);
						break;
						
						case 3:
							printf("You choose %d",b);
							break;
			}
			default:{
				printf("No course!");
				break;
			}
			break;
		}
			switch(a){
			case 2:
			    {printf("Avaialable Courses!\n");
			    printf("1: Human Biology\n");
			    printf("2: BioInformatics\n");
			    printf("3: Microbiology\n");
			    scanf("%d", &b);
			    switch(b){
					case 1:
					    printf("You choose %d",b);
					    break;
					
					case 2:
						printf("You choose %d",b);
						break;
						
						case 3:
							printf("You choose %d",b);
							break;
			}
			default:{
				printf("No course!");
				break;
			}
			break;
		}
			switch(a){
			case 3:
			    {printf("Avaialable Courses!\n");
			    printf("1: Mechanical Engineering\n");
			    printf("2: Biotech Engineering\n");
			    printf("3: Aeronautical Engineering\n");
			    scanf("%d", &b);
			    switch(b){
				case 1:
					printf("You choose %d",b);
					break;
					
					case 2:
						printf("You choose %d",b);
						break;
						
						case 3:
							printf("You choose %d",b);
							break;
			}
			default:{
				printf("No course!");
				break;
			}
			break;
			}
			default:{
				printf("You did not make any choice!")
				break;
			}
		}
	}
	return 0;
}
