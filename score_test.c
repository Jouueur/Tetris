

#include "score_test.h"


int last_line_test(int board[ROWS][COLS]){
    // If a row is full, return the row number
    int count = 0,row=0;

    for(int j=4;j<ROWS-1;j++){
        
        for(int i=1;i<COLS-1;i++)if(board[j][i] == 1 )count++;
        
        row = j;
        if(count == 10)return row;
        count = 0;
    }    
    return 0;
}

void last_line_remove(int board[ROWS][COLS]){
    // Remove the full lines
   
        
        for(int i = last_line_test(board); i>0;i--){
            for(int j = 1;j<COLS-1;j++){
                board[i][j] = board[i-1][j];
            }
        }
    
}

int col_test(int board[ROWS][COLS]){
    // look if pieces stay on the board (left/right)
    for(int i =4;i<19;i++){
        if(board[i][0] == 1)return 0;
        else if(board[i][11] == 1)return 0;
        
    }
    return 1;
}

int high_test(int board[ROWS][COLS]){
    // look if pieces stay on the board (high)

    for(int i=0;i<4;i++){
        for(int j=1;j<COLS-2;j++){
            if(board[i][j] != 0)return 1;
            
        }
    }
}

