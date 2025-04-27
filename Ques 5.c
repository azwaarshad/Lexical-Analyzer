#include <stdio.h>

// Function to compute Nth Fibonacci number iteratively
int fibonacciIterative(int n) {
    int a = 0, b = 1, fib = 0, i;
    
    if (n == 0)
        return a;
    else if (n == 1)
        return b;

    for (i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}

// Function to compute Nth Fibonacci number recursively
int fibonacciRecursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Iterative: The %dth Fibonacci number is: %d\n", n, fibonacciIterative(n));
    printf("Recursive: The %dth Fibonacci number is: %d\n", n, fibonacciRecursive(n));

    return 0;
}
