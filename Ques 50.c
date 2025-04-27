#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    
    printf("\n"); 
    
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    
    return 0;
}
