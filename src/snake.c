#include <stdio.h>
#include <stdlib.h>

void initGame(int width, int height){
    int board[width][height];

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            board[j][i] = 0;
        }
    }

    int snakeWPos = rand() % width;
    int snakeHPos = rand() % height;
    board[snakeWPos][snakeHPos] = 1;
}