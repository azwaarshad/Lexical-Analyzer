#include <stdio.h>
int findDuplicateNumber(int arr[], int len);
int main(){
	int arr[100], i;

    for (i = 0; i < 99; i++) {
        arr[i] = i + 1;
    }
    arr[99] = 51;  

    int duplicateNum = findDuplicateNumber(arr, 100);

    printf("The duplicate number is: %d\n", duplicateNum);

    return 0;
}

int findDuplicateNumber(int arr[], int len) {
    int i, sum = 0;

    for (i = 0; i < len; i++) {
        sum += arr[i];
    }

    int expectedSum = 100 * 101 / 2;

    return sum - expectedSum;
}
