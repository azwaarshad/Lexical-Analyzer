#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 20

int main() {
    int nums[ARRAY_SIZE] = {0};  
    int i, j, num, found;

    srand(time(NULL));  
    for (i = 0; i < ARRAY_SIZE; i++) {
        num = rand() % 20 + 1;  
        found = 0;  

        for (j = 0; j < i; j++) {
            if (nums[j] == num) {  
                found = 1;
                break;
            }
        }

        if (!found) {  
            nums[i] = num;
        }
    }

    printf("Non-duplicate values: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        if (nums[i] != 0) {  
            printf("%d ", nums[i]);
        }
    }
    printf("\n");

    return 0;
}
