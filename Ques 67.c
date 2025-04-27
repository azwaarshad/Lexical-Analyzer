#include <stdio.h>

#define MAX_SIZE 10

void matrix_multiply(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE], int n, int m, int p) {

    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
    int n, m, p, i, j;
    
    printf("Enter the number of rows and columns for matrix A (max size %d): ", MAX_SIZE);
    scanf("%d %d", &n, &m);
    
    printf("Enter the elements of matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter the number of rows and columns for matrix B (max size %d): ", MAX_SIZE);
    scanf("%d %d", &m, &p);
    
    printf("Enter the elements of matrix B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    matrix_multiply(A, B, C, n, m, p);
    
    printf("The product of matrices A and B is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
