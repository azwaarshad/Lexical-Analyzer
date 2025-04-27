#include <stdio.h>
void reverseString(char *str);

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

void reverseString(char *str){
    if (str == NULL)
        return;

    char *start = str;
    char *end = str;

    while(*end != '\0')
        end++;

    end--; 

    while (start<end){
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
