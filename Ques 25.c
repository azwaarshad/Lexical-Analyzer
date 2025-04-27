#include <stdio.h>
int findMissingNumber(int arr1[], int arr2[], int len1, int len2);
int main(){
	int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 1, 0, 5};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    int missingNumber = findMissingNumber(arr1, arr2, len1, len2);

    if (missingNumber == -1) {
        printf("No missing number found\n");
    }
    else {
        printf("The missing number is: %d\n", missingNumber);
    }

    return 0;
}

int findMissingNumber(int arr1[], int arr2[], int len1, int len2) {
    int i, j, found;

    for (i = 0; i < len1; i++) {
        found = 0;
        for (j = 0; j < len2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            return arr1[i];
        }
    }

    return -1; 
}
