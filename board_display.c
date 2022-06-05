
#include "board_display.h"
#include "pieces.h"


char pion(int p){
/* used to print the board */
	if(p == 0)return ' ';
	else{
		return 'x';
	}
	
}

void display_pieces_rotation(int piece){
	// Show the different rotation of the actual piece
	int temp;
	
	printf("\n 1     2     3     4\n");
	for(int i =0;i<4;i++){
		for(int j =0;j<4;j++){
			for(int k =0;k<4;k++){
				printf("%c",pion(pieces[piece][j][i][k]));
			}
		printf("  ");
		}
	printf("\n");
	}
	printf("\n");
	

}

void board_display(int board[ROWS][COLS],int piece){
	int p,a;


	for(int i = 0; i<10;i++)printf(" %d",1+i);      //Cols numbers
	
	
	printf("\n");
	for(int i = 4; i<ROWS-1;i++){	
		printf("|");
		for(int j = 1; j<COLS-1;j++){                 //board display
			a = board[i][j];   
			if(board[i][j] == 0)printf("%c",pion(a));           
			else if(board[i][j] == 1)printf("\x1b[91;5;155m%c",pion(a));
			else if(board[i][j] == 2)printf("\x1b[95;5;155m%c",pion(a));
			else if(board[i][j] == 3)printf("\x1b[92;5;155m%c",pion(a));
			else if(board[i][j] == 4)printf("\x1b[97;5;155m%c",pion(a));
			else if(board[i][j] == 5)printf("\x1b[94;5;155m%c",pion(a));
			else if(board[i][j] == 6)printf("\x1b[93;5;155m%c",pion(a));
			else if(board[i][j] == 7)printf("\x1b[96;5;155m%c",pion(a));
			
			printf("\x1b[0m|");
			
		}
		
		printf("\n");	
	}
	printf("\n\n");	
	
}
