#include <stdio.h>
void printPermutationsIterative(char str[]);
void printPermutationsRecursive(char str[], int start, int end);

int main(){
	char str[100];

    printf("Enter a string: ");
    scanf("%s",str);
	printf("Iterative permutations:\n");
    printPermutationsIterative(str);
	printf("Recursive permutations:\n");
    printPermutationsRecursive(str, 0, strlen(str) - 1);

    return 0;
}

void printPermutationsIterative(char str[]){
    int i, j, k, len;
    char temp;

    len = strlen(str);

    for (i = 0; i < len; i++){
        for (j = i + 1; j < len; j++){
            if (str[i] == str[j]) 
			continue;

            temp = str[i];
            str[i] = str[j];
            str[j] = temp;

            printf("%s\n", str);

            for (k = len - 1; k > j; k--){
                if (str[k] == str[j]) 
				continue;

                temp = str[j];
                str[j] = str[k];
                str[k] = temp;

                printf("%s\n", str);

                temp = str[k];
                str[k] = str[j];
                str[j] = temp;
            }

            temp = str[j];
            str[j] = str[i];
            str[i] = temp;
        }
    }
}

void printPermutationsRecursive(char str[], int start, int end){
    int i;
    char temp;

    if (start == end){
        printf("%s\n", str);
    } else {
        for (i = start; i <= end; i++){
            if (start != i && str[start] == str[i])
			continue;

            temp = str[start];
            str[start] = str[i];
            str[i] = temp;

            printPermutationsRecursive(str, start + 1, end);

            temp = str[start];
            str[start] = str[i];
            str[i] = temp;
        }
    }
}

    
