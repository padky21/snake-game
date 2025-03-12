#include <stdio.h>
#include "render.c"
#include "snake.c"

int main(){
    menu();
    initGame();   
    renderBoard(); 
    return 0;
}