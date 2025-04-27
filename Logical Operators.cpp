#include <iostream>
using namespace std;
int main(){
	int Age;
	bool Is_Student, Has_Coupon;
	cout<<"What is your age? ";
	cin>>Age;
	
	cout<<"Are you a student? (1 for yes, 0 for no) ";
	cin>>Is_Student;
	
	cout<<"Do you have a coupon? (1 for yes, 0 for no) ";
	cin>>Has_Coupon;
	
	if(Age>=65 || Is_Student==true || Has_Coupon==true){
		cout<<"You are eligible for discount!"<<endl;
	}
	else{
		cout<<"Sorry! No discount for you"<<endl;
	}
	return 0;
}
