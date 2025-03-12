#include <stdio.h>
#include <stdlib.h>
#include "render.c"
#include "snake.c"

int main(){
    menu();
    int width = 10, height = 10;

    int** board = initGame(width, height);
    renderBoard(board, width, height); 
    
    destroyBoard(board); // Free allocated memory
    return 0;
}