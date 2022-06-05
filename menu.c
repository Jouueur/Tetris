#include <stdio.h>
#include <stdlib.h>


#include "menu.h"
#include "board_display.h"



void print_first_menu(int board[ROWS][COLS]){ 
    // print menu and start game if 1 is pressed
    int choice;

    printf("\033[34;01m************************************\n");
    printf("               TETRIS\n\n  (1) Jouer\n  (2) Quitter\n\n");
    printf("************************************\033[00m\n");

    do{
        scanf("%d",&choice);
    }while((choice != 1) && (choice != 2));

    if(choice == 1)start_game(board);
    else{
        exit(1);
    }

}

