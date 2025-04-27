#include <stdio.h>

int main() {
    static int count = 1;
    printf("count = %d\n", count++);
    main();
    return 0;
}
