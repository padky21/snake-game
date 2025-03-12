#include <stdio.h>

void menu(){
    printf("----- Menu -----\n");
    printf("1 - New game\n");
    printf("2 - Exit\n");
}

void renderBoard(width, height){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            printf(" 0 ");
        }
        printf("\n");
    }
}