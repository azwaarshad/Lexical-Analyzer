#include <stdio.h>

int main() {
    int num,i,j;
    
    for (i = 1; i <= 5; i++) {
        printf("Enter a number between 1 and 30: ");
        scanf("%d", &num);
        
        for (j = 1; j <= num; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
