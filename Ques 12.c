#include <stdio.h>

// Function to check if a number is prime
int isPrime(int number) {
    int i;
	if (number <= 1)
        return 0;

    for (i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

// Function to find the prime factors of a number
void findPrimeFactors(int number) {
    int i;
	printf("Prime factors of %d are: ", number);

    for (i = 2; i <= number; i++) {
        if (number % i == 0 && isPrime(i)) {
            while (number % i == 0) {
                printf("%d ", i);
                number /= i;
            }
        }
    }

    printf("\n");
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    findPrimeFactors(number);

    return 0;
}
