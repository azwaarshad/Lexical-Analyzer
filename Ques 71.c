#include <stdio.h>
#include <ctype.h>
#include <string.h>

int testPalindrome(char str[], int left, int right) {
    
    if (left >= right) {
        return 1;
    }

    while (!isalnum(str[left])) {
        left++;
    }
    while (!isalnum(str[right])) {
        right--;
    }

    if (tolower(str[left]) == tolower(str[right])) {
        return testPalindrome(str, left+1, right-1);
    } else {
        return 0;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0; 

    if (testPalindrome(str, 0, strlen(str)-1)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
