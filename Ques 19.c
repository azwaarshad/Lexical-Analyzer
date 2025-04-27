#include <stdio.h>
#include <string.h>
int countChar(char str[], char c);
int main(){
	char str[100];
    char c;

    printf("Enter a string: ");
    scanf("%s",&str[100]);

    printf("Enter a character to count: ");
    scanf(" %c",&c);

    int count = countChar(str, c);

    printf("Number of occurrences of %c in %s: %d\n", c, str, count);

    return 0;
}

int countChar(char str[], char c) {
    int len = strlen(str);
    int count = 0;
    int i;

    for (i = 0; i < len; i++) {
        if (str[i] == c) {
            count++;
        }
    }

    return count;
}
