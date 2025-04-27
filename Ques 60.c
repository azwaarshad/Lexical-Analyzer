#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num, int divisor);

int main(){
	int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (isPrime(num, 2)) {
        printf("%d is a prime number.\n", num);
    }
    else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
bool isPrime(int num, int divisor) {
    if (num <= 2) { 
        return (num == 2) ? true : false;
    }
    else if (num % divisor == 0) { 
        return false;
    }
    else if (divisor * divisor > num) { 
        return true;
    }
    else {
        return isPrime(num, divisor + 1); 
    }
}
