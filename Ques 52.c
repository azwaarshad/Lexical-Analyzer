#include <stdio.h>

int main(void)
{
    int grade;
    int total = 0; 
    int counter = 0;
    float average;

    while (counter < 10) {
        printf("Enter grade: ");
        scanf("%d", &grade);
        total += grade; 
        counter++; 
    }

    average = (float) total / counter; 
    printf("Class average is %.2f\n", average);

    return 0;
}
