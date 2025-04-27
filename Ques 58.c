#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void towers_of_hanoi(int n, char from, char to, char aux);
void move(char *src, char *dest, char s, char d);

int main(){
	int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    
    towers_of_hanoi(n, 'A', 'C', 'B');
    
    return 0;
}

void towers_of_hanoi(int n, char from, char to, char aux) {
    int i, total_moves;
    char s[n+1], d[n+1], a[n+1];
    s[n] = d[n] = a[n] = '\0';

    for (i = n-1; i >= 0; i--) {
        s[i] = '0' + i + 1;
    }

    if (n % 2 == 0) {
        char temp = aux;
        aux = to;
        to = temp;
    }

    total_moves = pow(2, n) - 1;

    for (i = 1; i <= total_moves; i++) {
        if (i % 3 == 1) {
            move(&s, &d, from, to);
        } else if (i % 3 == 2) {
            move(&s, &a, from, aux);
        } else {
            move(&a, &d, aux, to);
        }
    }
}

void move(char *src, char *dest, char s, char d) {
    int i, j;
    for (i = 0; src[i] != '\0'; i++);
    for (j = 0; dest[j] != '\0'; j++);

    dest[j] = src[i-1];
    src[i-1] = '\0';

    printf("Move disk %c from %c to %c\n", dest[j], s, d);
}
