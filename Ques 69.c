#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 8

int board[BOARD_SIZE][BOARD_SIZE];
int moves[8][2] = {{-2, -1}, {-1, -2}, {1, -2}, {2, -1},
                   {2, 1}, {1, 2}, {-1, 2}, {-2, 1}};

int isValidMove(int x, int y) {
    if (x >= 0 && x < BOARD_SIZE && y >= 0 && y < BOARD_SIZE && board[x][y] == 0) {
        return 1;
    }
    return 0;
}

int findClosedTour(int x, int y, int moveNum, int startX, int startY) {
    int i, nextX, nextY;

    board[x][y] = moveNum;

    if (moveNum == BOARD_SIZE * BOARD_SIZE) {
        for (i = 0; i < 8; i++) {
            nextX = x + moves[i][0];
            nextY = y + moves[i][1];
            if (nextX == startX && nextY == startY) {
                
                return 1;
            }
        }
        board[x][y] = 0;
        return 0;
    }

    for (i = 0; i < 8; i++) {
        nextX = x + moves[i][0];
        nextY = y + moves[i][1];
        if (isValidMove(nextX, nextY)) {
            if (findClosedTour(nextX, nextY, moveNum+1, startX, startY)) {
                return 1;
            }
        }
    }
    
    board[x][y] = 0;
    return 0;
}

void printBoard() {
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            printf("%2d ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int startX, startY;

    srand(time(NULL));  

    startX = rand() % BOARD_SIZE;
    startY = rand() % BOARD_SIZE;

    while (!findClosedTour(startX, startY, 1, startX, startY)) {
        startX = rand() % BOARD_SIZE;
        startY = rand() % BOARD_SIZE;
    }

    printf("Closed tour found!\n");
    printBoard();

    return 0;
}
