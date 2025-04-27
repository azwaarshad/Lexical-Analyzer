#include <stdio.h>
void findPairs(int arr[], int len, int sum);
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 7;

    findPairs(arr, len, sum);

    return 0;
}
void findPairs(int arr[], int len, int sum) {
	int i,j;
    printf("Pairs with sum %d are:\n", sum);
    for(i = 0; i < len - 1; i++){
        for (j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
}
