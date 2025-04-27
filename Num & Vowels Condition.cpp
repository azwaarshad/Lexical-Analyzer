#include <iostream>
using namespace std;
int main(){
	int Num;
	char Vowels;
	cout<<"Enter any number: ";
	cin>>Num;
	cout<<"Enter any letter: ";
	cin>>Vowels;
	if((Num>0)&&(Vowels=='a')||(Vowels=='e')||(Vowels=='i')||(Vowels=='o')||(Vowels=='u')||(Vowels=='A')||(Vowels=='E')||(Vowels=='I')||(Vowels=='O')||(Vowels=='U')){
		printf("Right");
	}
	else{
		printf("Wrong");
	}
	return 0;
}
