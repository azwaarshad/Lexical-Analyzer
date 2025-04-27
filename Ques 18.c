#include <stdio.h>
#include <string.h>
char findFirstNonRepeatedChar(char str[]);
int main(){
	char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = findFirstNonRepeatedChar(str);

    if (result != '\0'){
        printf("First non-repeated character: %c\n", result);
    } 
	else{
        printf("No non-repeated character found.\n");
    }

    return 0;
}

char findFirstNonRepeatedChar(char str[]){
    int len = strlen(str);
    int i, j;
    int count;

    for (i = 0; i < len; i++) {
        count = 0;
        for (j = 0; j < len; j++) {
            if (i != j && str[i] == str[j]) {
                count++;
                break;
            }
        }
        if (count == 0) {
            return str[i];
        }
    }

    return '\0';
}
