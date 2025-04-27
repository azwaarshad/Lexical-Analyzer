#include <stdio.h>
#include <stdlib.h>
void findDuplicateNumbers(int arr[], int len);
int main(){
	int arr[100], i;

    for (i = 0; i < 100; i++) {
        arr[i] = (i % 10) + 1;
    }
    arr[5] = 7;   
    arr[37] = 2;
    arr[68] = 8;

    findDuplicateNumbers(arr, 100);

    return 0;
}

void findDuplicateNumbers(int arr[], int len) {
    int i, *freq;

    freq = (int*)calloc(len, sizeof(int));

    for (i = 0; i < len; i++) {
        freq[arr[i] - 1]++;
    }

    for (i = 0; i < len; i++) {
        if (freq[i] > 1) {
            printf("%d is a duplicate number\n", i+1);
        }
    }

    free(freq);
}

