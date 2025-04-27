#include <stdio.h>
int findMissingNumber(int arr[], int len);
int main(){
	int arr[99], i;

    for (i = 0; i < 99; i++) {
        arr[i] = i + 1;
    }
    arr[50] = 0; 

    int missingNum = findMissingNumber(arr, 99);

    printf("The missing number is: %d\n", missingNum);

    return 0;
}
int findMissingNumber(int arr[], int len) {
    int i, expectedSum = 0, actualSum = 0;

    for (i = 1; i <= 100; i++) {
        expectedSum += i;
    }

    for (i = 0; i < len; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}
