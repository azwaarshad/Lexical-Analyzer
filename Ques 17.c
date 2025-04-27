#include <stdio.h>
#include <string.h>
void longestPalindrome(char str[]);
int main(){
	char str[100];

    printf("Enter a string: ");
    scanf("%s",&str);

    longestPalindrome(str);

    return 0;
}

void longestPalindrome(char str[]){
    int i, j, k, len, maxLength = 1, start = 0;
    int table[1000][1000] = {0}; 

    len = strlen(str);

    for (i = 0; i < len; i++){
        table[i][i] = 1;
    }

    for (i = 0; i < len - 1; i++){
        if (str[i] == str[i + 1]){
            table[i][i + 1] = 1;
            start = i;
            maxLength = 2;
        }
    }

    for (k = 3; k <= len; k++){
        for (i = 0; i < len - k + 1; i++){
            j = i + k - 1;
            if (table[i + 1][j - 1] == 1 && str[i] == str[j]){
                table[i][j] = 1;
                if (k > maxLength){
                    maxLength = k;
                    start = i;
                }
            }
        }
    }

    printf("Longest palindrome: ");
    for (i = start; i <= start + maxLength - 1; i++){
        printf("%c", str[i]);
    }
    printf("\n");
}
