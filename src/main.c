#include <stdio.h>
#include "render.c"
#include "snake.c"

int main(){
    int width = 15;
    int height = 10;
    menu();
    initGame(width, height);   
    renderBoard(width, height); 
    return 0;
}