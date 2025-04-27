#include <stdio.h>
#include <string.h>
int areAnagrams(char str1[], char str2[]);
int main(){
	char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s",&str1);

    printf("Enter the second string: ");
    scanf("%s",&str2);

    if (areAnagrams(str1, str2)) {
        printf("%s and %s are anagrams.\n", str1, str2);
    } else {
        printf("%s and %s are not anagrams.\n", str1, str2);
    }

    return 0;
}
int areAnagrams(char str1[], char str2[]){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int count[256] = {0};   
    int i;

    if (len1 != len2){
        return 0;
    }

    for (i = 0; i < len1; i++){
        count[str1[i]]++;
    }

    for (i = 0; i < len2; i++){
        count[str2[i]]--;
    }

    for (i = 0; i < 256; i++){
        if (count[i] != 0){
            return 0;
        }
    }

    return 1;
}
