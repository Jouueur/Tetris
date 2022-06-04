all: game

main.o:		main.c

menu.o:		menu.c menu.h
			gcc -c menu.c -o menu.o

board_display.o:	board_display.c board_display.h
					gcc -c board_display.c -o board_display.o

score_test.o:	score_test.c score_test.h
				gcc -c score_test.c -o score_test.o

pieces.o:	pieces.c pieces.h
			gcc -c pieces.c -o pieces.o

Game.o:		Game.c Game.h
			gcc -c Game.c -o Game.o

rand.o:		rand.c rand.h
			gcc -c rand.c -o rand.o

game: 		 main.o menu.o board_display.o score_test.o pieces.o Game.o rand.o
		gcc main.o menu.o board_display.o score_test.o pieces.o Game.o rand.o -o game