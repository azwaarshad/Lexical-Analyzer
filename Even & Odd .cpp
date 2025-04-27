#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter any number:";
	cin>>a;
	switch(a%2==0){
		{case 1:
			printf("%d is an even number",a);
			break;
		}
	    default:{
		    printf("%d is an odd number",a);
		}
	}
	return 0;
}
