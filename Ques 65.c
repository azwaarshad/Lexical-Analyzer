#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void practice(int difficulty, int op_type);

int main(){
	int difficulty, op_type;

    printf("Enter difficulty level (1-4): ");
    scanf("%d", &difficulty);

    printf("Enter type of arithmetic problem to study:\n");
    printf("1) Addition\n");
    printf("2) Subtraction\n");
    printf("3) Multiplication\n");
    printf("4) Random mixture\n");
    scanf("%d", &op_type);

    practice(difficulty, op_type);

    return 0;
}

void practice(int difficulty, int op_type){
    int num1, num2, answer, correct = 0, incorrect = 0;
    char operator;

    srand(time(NULL));

    while (1) {
        switch (op_type) {
            case 1:
                operator = '+';
                break;
            case 2:
                operator = '-';
                break;
            case 3:
                operator = '*';
                break;
            case 4:
                operator = rand() % 3 ? '+' : (rand() % 2 ? '-' : '*');
                break;
            default:
                printf("Invalid operation type.\n");
                return;
        }

        num1 = rand() % (difficulty == 1 ? 10 : difficulty == 2 ? 100 : difficulty == 3 ? 1000 : 10000);
        num2 = rand() % (difficulty == 1 ? 10 : difficulty == 2 ? 100 : difficulty == 3 ? 1000 : 10000);

        if (operator == '-') {
            if (num1 < num2) {
                int temp = num1;
                num1 = num2;
                num2 = temp;
            }
        }

        printf("What is %d %c %d? ", num1, operator, num2);
        scanf("%d", &answer);

        if ((operator == '+' && answer == num1 + num2)
                || (operator == '-' && answer == num1 - num2)
                || (operator == '*' && answer == num1 * num2)) {
            printf("Correct!\n");
            correct++;
        } else {
            printf("Incorrect. The correct answer is %d.\n", operator == '+' ? num1 + num2 :
                    operator == '-' ? num1 - num2 : num1 * num2);
            incorrect++;
        }

        if (correct + incorrect == 10) {
            double percent = (double) correct / (correct + incorrect) * 100.0;
            printf("You scored %.2f%%.\n", percent);
            if (percent < 75.0) {
                printf("Please ask your teacher for extra help.\n");
            } else {
                printf("Congratulations, you are ready to go to the next level!\n");
            }
            return;
        }
    }
}
