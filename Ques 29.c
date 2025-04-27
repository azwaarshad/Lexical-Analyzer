#include <stdio.h>
void findMinMax(int arr[], int len, int* min, int* max);
int main(){
	int arr[] = {5, 2, 9, 1, 7, 3};
    int len = sizeof(arr) / sizeof(arr[0]);

    int min, max;
    findMinMax(arr, len, &min, &max);

    printf("The largest number in the array is: %d\n", max);
    printf("The smallest number in the array is: %d\n", min);

    return 0;
}

void findMinMax(int arr[], int len, int* min, int* max) {
	int i;
    *min = arr[0];
    *max = arr[0];

    for (i = 1; i < len; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}
