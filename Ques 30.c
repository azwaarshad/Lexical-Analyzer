#include <stdio.h>
void findTopTwoMax(int arr[], int len);
int main(){
	int arr[] = {5, 2, 9, 1, 7, 3};
    int len = sizeof(arr) / sizeof(arr[0]);

    findTopTwoMax(arr, len);

    return 0;
}

void findTopTwoMax(int arr[], int len) {
	int i;
    int max1 = arr[0];
    int max2 = arr[1];

    if (max1 < max2) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (i = 2; i < len; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("The top two maximum numbers in the array are: %d and %d\n", max1, max2);
}

