
Le problème que je veux régler en priorité est le fait que les pièces se passent au travers 
malgré ma fonction put_L dans pieces.c qui est censé détecter les autres pièces avant de poser la nouvelle.

Cette fonction avait déjà marché auparavant mais ne reconnais maintenant plus les autres pièces, 
les nouvelles pièces se posent directement tout en bas.


Compiler -> gcc menu.c board_display.c main.c score_test.c pieces.c Game.c rand.c -o tetris

Executer -> ./tetris

Play tetris on a 15*10 board. You have the choice between different rotations, just before choossing the col. 
Be careful, the col that you choose will be the furthest to the left of the piece.
If you make your piece exceed the board, the game will stop.

Go play and try to beat the highscore !