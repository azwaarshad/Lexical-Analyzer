#include <iostream>
using namespace std;
int main(){
	int a,b;
	char Op;
	cout<<"Enter number: ";
	cin>>a;
	cout<<"Enetr another number: ";
	cin>>b;
	cout<<"Enter any operator: ";
	cin>>Op;
	switch(Op){
		{case '+':
			printf("%d %c %d = %d", a,Op,b,a+b);
			break;
		}
		{case '-':
			printf("%d %c %d = %d", a,Op,b,a-b);
			break;
		}
		{case '*':
			printf("%d %c %d = %d", a,Op,b,a*b);
			break;
		}
		{case '/':
			printf("%d %c %d = %d", a,Op,b,a/b);
			break;
		}
		{case '%':
			printf("%d %c %d = %d", a,Op,b,a%b);
			break;
		}
		default:{
			printf("Invalid");
		}
	}
	return 0;
}
