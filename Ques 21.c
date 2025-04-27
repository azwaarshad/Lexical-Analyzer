#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int stringToInt(char str[]);
int stringToInt(char str[]);
int main(){
	char str[100];

    printf("Enter a numeric string: ");
    scanf("%s", str);

    int num = stringToInt(str);

    printf("The integer value of %s is: %d\n", str, num);

    return 0;
}
int stringToInt(char str[]) {
    int len = strlen(str);
    int i, num = 0;

    for (i = 0; i < len; i++) {
        num = num * 10 + (str[i] - '0');
    }

    return num;
}
