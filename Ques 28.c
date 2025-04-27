#include <stdio.h>
int removeDuplicates(int arr[], int len);
int main(){
	int i;
	int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Array before removing duplicates: ");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    len = removeDuplicates(arr, len);

    printf("\nArray after removing duplicates: ");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
int removeDuplicates(int arr[], int len) {
    int i, j, k;

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < len; k++) {
                    arr[k] = arr[k + 1];
                }
                len--;
            } else {
                j++;
            }
        }
    }

    return len;
}
