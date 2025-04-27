#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rollDice(void); 

int main(void) {
    int bankBalance = 1000; 
    int wager = 0;
    int sum, myPoint;

    srand(time(NULL)); 
    printf("Welcome to the game of craps!\n");

    while (bankBalance > 0) { 
        printf("Your bank balance is $%d.\n", bankBalance);

        do { 
            printf("Enter your wager: $");
            scanf("%d", &wager);
            if (wager > bankBalance) {
                printf("You cannot wager more than your bank balance. Please enter a valid wager.\n");
            }
        } while (wager > bankBalance);

        printf("Press Enter to roll the dice...");
        getchar(); 

        sum = rollDice();

        switch (sum) {
            case 7:
            case 11:
                printf("You win!\n");
                bankBalance += wager;
                break;
            case 2:
            case 3:
            case 12:
                printf("You lose!\n");
                bankBalance -= wager;
                break;
            default:
                myPoint = sum;
                printf("Your point is %d.\n", myPoint);
                do {
                    printf("Press Enter to roll the dice...");
                    getchar(); 
                    sum = rollDice();
                } while (sum != myPoint && sum != 7);

                if (sum == myPoint) {
                    printf("You win!\n");
                    bankBalance += wager;
                } else {
                    printf("You lose!\n");
                    bankBalance -= wager;
                }
                break;
        }

        if (bankBalance == 0) {
            printf("Sorry. You busted!\n");
            break;
        }

        switch (rand() % 3) {
            case 0:
                printf("Oh, you're going for broke, huh?\n");
                break;
            case 1:
                printf("Aw c'mon, take a chance!\n");
                break;
            case 2:
                printf("You're up big. Now's the time to cash in your chips!\n");
                break;
        }
    }

    printf("Thanks for playing!\n");
}

int rollDice(void) {
    int die1 = 1 + rand() % 6; 
    int die2 = 1 + rand() % 6; 
    int sum = die1 + die2;

    printf("You rolled %d + %d = %d\n", die1, die2, sum);

    return sum;
}
