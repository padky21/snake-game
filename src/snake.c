#include <stdio.h>
#include <stdlib.h>


// Function to initialize the board and return it
int** createBoard(int width, int height) {
    int* values = calloc(width*height, sizeof(int));
    int** board = malloc(width * sizeof(int*));
    for (int i = 0; i < width; ++i) {  
        board[i] = values + i*height;
    }

    return board;
}

int** initSnake(int** board, int width, int height){
    int snakeX = rand() % (width - 0 + 1)
                    + 0;
    int snakeY = rand() % (height - 0 + 1)
                    + 0;
    //int snakeX = rand();
    //int snakeY = rand();
    board[snakeY][snakeX] = 1;

    return board;
}


int** initGame(int width, int height){
    int** board = createBoard(width, height);
    initSnake(board, width, height);
    return board;
}

// Function to free the allocated memory
void destroyBoard(int** board) {
    free(*board);
    free(board);
}