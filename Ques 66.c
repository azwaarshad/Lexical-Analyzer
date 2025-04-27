#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void); 

int main(void) {
    srand(time(NULL)); 
    int winCount[22] = {0}; 
    int loseCount[22] = {0}; 
    int win = 0, lose = 0; 
    int point = 0; 
    int totalRolls = 0; 
    int gamesPlayed = 1000; 
    int gameCount = 0; 
	int i;
	
    while (gameCount < gamesPlayed) {
        int rollCount = 1; 
        int sum = rollDice(); 
        totalRolls++;

        switch (sum) {
            case 7:
            case 11:
                win++;
                winCount[rollCount]++;
                break;
            case 2:
            case 3:
            case 12:
                lose++;
                loseCount[rollCount]++;
                break;
            default:
                point = sum;
                while (1) {
                    rollCount++;
                    sum = rollDice();
                    totalRolls++;

                    if (sum == point) {
                        win++;
                        winCount[rollCount]++;
                        break;
                    } else if (sum == 7) {
                        lose++;
                        loseCount[rollCount]++;
                        break;
                    }
                }
                break;
        }
        gameCount++;
    }

    printf("Wins and Losses by roll\n");
    printf("Roll\tWins\tLosses\n");
    for (i = 1; i <= 21; i++) {
        printf("%d\t%d\t%d\n", i, winCount[i], loseCount[i]);
    }
    printf("After 20\t%d\t%d\n", winCount[21], loseCount[21]);

    double winChances = (double)win / gamesPlayed;
    printf("\nChances of winning at craps: %.2lf%%\n", winChances * 100);

    double avgRolls = (double)totalRolls / gamesPlayed;
    printf("\nAverage length of a game of craps: %.2lf\n", avgRolls);

    double chancesOfWinning[22];
    for (i = 1; i <= 21; i++) {
        chancesOfWinning[i] = (double)winCount[i] / (winCount[i] + loseCount[i]);
    }

    printf("\nChances of winning by roll\n");
    printf("Roll\tChances\n");
    for (i = 1; i <= 21; i++) {
        printf("%d\t%.2lf%%\n", i, chancesOfWinning[i] * 100);
    }

    return 0;
}

int rollDice(void) {
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;

    return sum;
}




