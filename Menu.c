


void print_first_menu(){ 
    // Launch the game
    int choice;

    printf("************************************\n");
    printf("               TETRIS\n\n  (1) Jouer\n  (2) Quitter\n\n");
    printf("************************************\n");

    do{
    scanf("%d",&choice);
    }while((choice != 1) && (choice != 2));

    if(choice == 1);
    else{
        exit(1);
    }
}
