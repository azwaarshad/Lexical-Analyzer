#include <stdio.h>
void towers_of_hanoi(int n, int source, int dest, int temp);
int main(){
	int n = 3; 
    int source = 1; 
    int dest = 3; 
    int temp = 2; 
    towers_of_hanoi(n, source, dest, temp);
    return 0;
}

void towers_of_hanoi(int n, int source, int dest, int temp) {
    if (n == 1) {
        printf("%d -> %d\n", source, dest);
        return;
    }
    towers_of_hanoi(n-1, source, temp, dest);
    printf("%d -> %d\n", source, dest);
    towers_of_hanoi(n-1, temp, dest, source);
}
