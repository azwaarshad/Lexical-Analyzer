#include <stdio.h>
int findSecondHighest(int arr[], int len);
int main(){
	int arr[] = {10, 5, 7, 12, 8};
    int len = sizeof(arr) / sizeof(arr[0]);

    int secondHighest = findSecondHighest(arr, len);

    printf("The second highest number is: %d\n", secondHighest);

    return 0;
}

int findSecondHighest(int arr[], int len) {
	int i;
    int highest = arr[0];
    int secondHighest = arr[0];

    for(i = 1; i < len; i++) {
        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        }
        else if (arr[i] > secondHighest && arr[i] != highest) {
            secondHighest = arr[i];
        }
    }

    return secondHighest;
}
