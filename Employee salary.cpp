#include <stdio.h>
int main(){
	int Bs,Ta,Ha,It,Gs,Ns;
	printf("Enter basic salary: ");
	scanf("%d", &Bs);
	if (Bs>=10000){
		Ta = Bs*(2/100);
		Ha = Bs*(7/100);
		Gs = Bs+Ta+Ha;
		It = Gs*(10/100);
		Ns = Gs - It;
	}
	
	else{
		Ta = Bs*(3/100);
		Ha = Bs*(9/100);
		Gs = Bs+Ta+Ha;
		It = Gs*(10/100);
		Ns = Gs - It;
	}
	printf("The basic salary of employee is %d and net salary is %d", Bs,Ns);
	return 0;
}
