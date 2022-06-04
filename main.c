#include <stdio.h>
#include <stdlib.h>




#include "menu.h"




int main(){

	int board[ROWS][COLS];
	for(int i =0;i<ROWS;i++){		// Create tab
		for(int j =0;j<COLS;j++){
			board[i][j] = 0;
					
		}
	}
	
	for(int j=0;j<COLS;j++){	
		board[19][j] = 1;	// Full last line
	}


	print_first_menu(board);

    return 0;
}

