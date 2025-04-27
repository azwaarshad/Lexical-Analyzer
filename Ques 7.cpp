#include <stdio.h>
using namespace std;
int main(){
	int passes, failures, student, result;
	while(student <= 10){
		printf("Enter result (1=Pass, 2=Fail): ");
		scanf("%d", &result);
		
		if(result == 1){
			passes = passes + 1;
		}
		else{
			failures = failures + 1;
		}
		student = student + 1;
	}
	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);
	
	if(passes > 8){
		printf("Raise tution");
	}
	return 0;
}
