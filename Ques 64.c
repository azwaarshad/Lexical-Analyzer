#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int level, num1, num2, answer, response, correct = 0, total = 0;
    srand(time(NULL));  

    printf("Enter difficulty level (1-4): ");
    scanf("%d", &level);

    while (1) {
        num1 = rand() % (level * 9) + 1;
        num2 = rand() % (level * 9) + 1;

        printf("How much is %d times %d? ", num1, num2);
        scanf("%d", &response);

        total++;

        if (response == num1 * num2) {
            correct++;
            printf("Very good!\n");
        } else {
            printf("No. Please try again.\n");
        }

        if (total == 10) {
            double percentage = (double) correct / total * 100;
            printf("You got %d out of %d questions correct (%.1f%%).\n", correct, total, percentage);
            if (percentage < 75) {
                printf("Please ask your teacher for extra help.\n");
            } else {
                printf("Congratulations, you are ready to go to the next level!\n");
            }
            printf("Enter difficulty level (1-4) or 0 to quit: ");
            scanf("%d", &level);
            if (level == 0) {
                break;
            }
            correct = 0;
            total = 0;
        }
    }

    return 0;
}
