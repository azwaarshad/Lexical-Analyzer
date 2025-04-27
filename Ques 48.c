#include <stdio.h>

int main(void)
{
    int celsius;
    float fahrenheit;
    
    printf("Celsius\tFahrenheit\n");
    printf("-------\t----------\n");
    
    for (celsius = 30; celsius <= 50; celsius++) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }
    
    return 0;
}
