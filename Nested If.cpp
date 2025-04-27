#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	printf("Enter values of a,b,c,d and e: ");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	if(a>b)
	if(a>c)
	if(a>d)
	if(a>e){
		printf("a is greater than all");
	}
	if(b>a)
	if(b>c)
	if(b>d)
	if(b>e){
		printf("b is greater than all");
	}
	if(c>a)
	if(c>b)
	if(c>d)
	if(c>e){
		printf("c is greater than all");
	}
	if(d>a)
	if(d>b)
	if(d>c)
	if(d>e){
		printf("d is greater than all");
	}
	else{
		printf("e is greater");
	}
}
