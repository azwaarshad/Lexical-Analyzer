#include <stdio.h>

#define SIZE 1000

int main() {
    int primes[SIZE];  
    int i, j;
    
    
    for (i = 0; i < SIZE; i++) {
        primes[i] = 1;
    }
    
    
    for (i = 2; i < SIZE; i++) {
        
        if (primes[i] == 1) {
            printf("%d ", i);  
            for (j = i+1; j < SIZE; j++) {
                if (j % i == 0) {
                    primes[j] = 0;
                }
            }
        }
    }
    
    return 0;
}
