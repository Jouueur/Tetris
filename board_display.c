
#include "board_display.h"
#include "pieces.h"


char pion(int p){
/* used to print the board */
	if(p == 0)return ' ';
	else if(p == 1)return 'x';
	
}

void display_pieces_rotation(int piece){
	// Show the different rotation of the actual piece
	int temp;
	
	printf("\n 1     2     3     4\n");
	for(int i =0;i<4;i++){
		for(int j =0;j<4;j++){
			for(int k =0;k<4;k++){
				temp = pion(pieces[piece][i][j][k]);
				printf("%c",pion(pieces[piece][j][i][k]));
			}
		printf("  ");
		}
	printf("\n");
	}
	printf("\n");
	

}

void board_display(int board[ROWS][COLS],int piece){
	// Display the board game
	
	int p,a;

	for(int i = 0; i<10;i++)printf(" %d",1+i);      //Cols numbers
	
	
	printf("\n");
	for(int i = 4; i<ROWS-1;i++){	
		printf("|");
		for(int j = 1; j<COLS-1;j++){                 //board display
			a = board[i][j];              

			
			printf("%c|",pion(a));
			
		}
		
		printf("\n");	
	}
	printf("\n\n");	
	
}
