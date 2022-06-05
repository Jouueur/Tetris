#include "Game.h"




/*void clear_scan(){
    char c;
    int res;
    do{
        res = fscanf(stdin,"%c",&c);
    }while(res==1 && c !="\n");
}*/



void start_game(int board[ROWS][COLS]){
	// The base of the game, start and end
    int col,rota,piece=0,score=0,highscore;
    char name[50],highscore_name[50];
    
	do{
        
        for(int i = 0; i<4;i++){
            if(last_line_test(board) != 0){
                last_line_remove(board);	// remove the full lines
                score = score + 100;
            }
        }
        piece = rand_piece();

        printf("Score : \033[34;01m%d\033[00m\n",score); // show score


        display_pieces_rotation(piece);
        board_display(board,piece);

        do{
            printf("Choose the orientation: "); // Col ask
            scanf("%d",&rota);
        }while(rota < 1 || rota > 4);
        
        do{
            printf("\nChoose the col: ");   // Row ask
            scanf("%d",&col);
        }while(rota < 1 || rota > 10);

        put_L(board,col,piece,rota);
        
        if (col_test(board) == 0)printf("You missed it ! Be carefull next time...\n"); // Out of board (left/right)



    }while( (high_test(board) ==0) && (col_test(board) == 1));

    if(high_test(board) == 1)printf("Too high ! You loose.\n"); // Reach high limit


        FILE *f = NULL;
    f=fopen("Highscore.txt","r+");	// Highscore save
    if(f!= NULL){
        fscanf(f,"%s",highscore_name);
        fscanf(f,"%d",&highscore);
    }        
    else{printf("problem opening Highscore.txt");}
    fclose(f);

    if(score > highscore){
        printf("New highscore ! Insert your name:\n");	// Ssave new highscore
        scanf("%s",name);
        save_score(score,name,1);
    }
    else{
        f=fopen("Highscore.txt","r+");
        printf("Actual highscore : %s,%d points\n",highscore_name,highscore);	// print actual highscore
        fclose(f);
    }
}


    
