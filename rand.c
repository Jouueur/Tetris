#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "menu.h"
#include "board_display.h"
#include "score_test.h"
#include "pieces.h"
#include "Game.h"
#include "rand.h"

int rand_piece(){
    // Return random number to choose the piece
    int random;
    srand(time(NULL));
    random = rand() % 7;
    return random;
}

void save_score(int score, char name[50],int rank){
    // Insert new highscores
    FILE *f = fopen("Highscore.txt","w+");
    if(f!= NULL){

        for(int i =0;i<strlen(name);i++){
            fprintf(f,"%c",name[i]);
        }       
            fprintf(f," %d",score);
    }
    else{printf("problem opening Highscore.txt");}
    fclose(f);

}
