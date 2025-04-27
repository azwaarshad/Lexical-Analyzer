#include <iostream>
using namespace std;

int max(int a, int b);
int min(int a, int b);
int main(){
	int num1, num2;
	cout<<"Enter two numbers: "<<endl;
	cin>>num1>>num2;
	max(num1, num2);
	min(num1, num2);
	return 0;
}

int max(int a, int b){
	if(a>b)
		cout<<a<<" is largest"<<endl;
	else
		cout<<b<<" is largest"<<endl;
}

int min(int a, int b){
	if(a<b)
		cout<<a<<" is smallest"<<endl;
	else
		cout<<b<<" is smallest"<<endl;
}
