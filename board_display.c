
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
			else if(board[i][j] == 1)printf("\033[91;01m%c",pion(a));	// add colors
			else if(board[i][j] == 2)printf("\033[92;01m%c",pion(a));
			else if(board[i][j] == 3)printf("\033[93;01m%c",pion(a));
			else if(board[i][j] == 4)printf("\033[94;01m%c",pion(a));
			else if(board[i][j] == 5)printf("\033[95;01m%c",pion(a));
			else if(board[i][j] == 6)printf("\033[96;01m%c",pion(a));
			else if(board[i][j] == 7)printf("\033[97;01m%c",pion(a));
			
			printf("\033[00m|");
			
		}
		
		printf("\n");	
	}
	printf("\n\n");	
	
}
