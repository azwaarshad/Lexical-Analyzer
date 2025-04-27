#include <iostream>
using namespace std;
int main(){
	char Character;
	cout<<"Enter any character: ";
	cin>>Character;
	switch(Character){
		{case 'A':
			printf("%c is a vowel", Character);
			break;
		}
		{case 'E':
			printf("%c is a vowel", Character);
			break;
		}
		{case 'I':
			printf("%c is a vowel", Character);
			break;
		}
		{case 'O':
			printf("%c is a vowel", Character);
			break;
		}
		{case 'U':
			printf("%c is a vowel", Character);
			break;
		}
		{case 'a':
			printf("%c is a vowel", Character);
			break;
		}
		{case 'e':
			printf("%c is a vowel", Character);
			break;
		}
		{case 'i':
			printf("%c is a vowel", Character);
			break;
		}
		{case 'o':
			printf("%c is a vowel", Character);
			break;
		}
		{case 'u':
			printf("%c is a vowel", Character);
			break;
		}
		default:{
			printf("%c ia a consonant", Character);
			break;
		}
	}
	return 0;
}
