#include <stdio.h>
#include <string.h>

// Function to remove a character from a string
void removeCharacter(char* str, char ch) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = 0; i < length; i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter a character to remove: ");
    scanf("%c", &ch);

    removeCharacter(str, ch);

    printf("String after removing '%c': %s\n", ch, str);

    return 0;
}
