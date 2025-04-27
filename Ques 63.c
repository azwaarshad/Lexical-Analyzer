#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int num1, num2, ans, correct = 0, incorrect = 0, count = 0;
    double percentage;
    srand(time(NULL)); 

    while (1) {
        num1 = rand() % 10 + 1;
        num2 = rand() % 10 + 1;

        printf("What is %d times %d? ", num1, num2);
        scanf("%d", &ans);

        if (ans == num1 * num2) {
            printf("Very good!\n");
            correct++;
        } else {
            printf("No. Please try again.\n");
            incorrect++;
        }

        count++;
        if (count == 10) {
            percentage = (double) correct / count * 100;

            if (percentage < 75) {
                printf("Please ask your teacher for extra help.\n");
            } else {
                printf("Congratulations, you are ready to go to the next level!\n");
            }

            printf("You got %d correct out of %d.\n", correct, count);
            printf("Percentage correct: %.2f%%\n", percentage);

            correct = 0;
            incorrect = 0;
            count = 0;

            printf("Starting a new quiz...\n\n");
        }
    }

    return 0;
}
