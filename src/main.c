#include <stdio.h>
#include "render.c"
#include "snake.c"

int main(){
    menu();
    initGame(15, 10);   
    renderBoard(15, 10); 
    return 0;
}