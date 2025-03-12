#include <stdio.h>

void menu(){
    printf("----- Menu -----\n");
    printf("1 - New game\n");
    printf("2 - Exit\n");
}

void renderBoard(int** board, int width, int height){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(board[i][j] == 0){
                printf(" . ");
            }else if(board[i][j] == 1){
                printf(" S ");
            }
        }
        printf("\n");
    }
}