#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int game(char you, char comp){

    // If same == draw
    if (you == comp) return 0;

    // Rock
    else if (you == 'R' && comp == 'P') return -1;
    else if (you == 'R' && comp == 'S') return 1;

    // Paper
    else if (you == 'P' && comp == 'R') return 1;
    else if (you == 'P' && comp == 'S') return -1;

    //Scissors
    else if (you == 'S' && comp == 'P') return 1;
    else if (you == 'S' && comp == 'R') return -1;
    
}


int main(){

    int play = 1;

    printf("\t\t\tWelcome to Rock Paper Scissors!!\n");

    srand(time(NULL));


    char you,comp,result;
    int bot = rand() % 100;
    
    printf("\t\tChoose R for Rock, P for Paper, S for Scissors.\n\n\t\t\t\t\t");
    int cont = 0;
    while (cont != 1){
        scanf(" %c", &you);
        you = toupper(you);
        if ( you != 'R' && you != 'P' && you != 'S'){
            cont = 0;
            printf("\t\tInvalid input. Choose R for Rock, P for Paper, S for Scissors.\n\t\t\t\t\t");
        } 
            
        else cont = 1;
    
    }
    
    //Random bot result
    if (bot < 33) comp = 'R';
    else if(bot > 33 && bot < 66) comp = 'P';
    else comp = 'S';

    
    int decision = game(you,comp);

    if (decision == 1) printf("\n\t\t\t\tYou Win!!\n");
    else if (decision == -1) printf("\n\t\t\t\tYou Lose!!\n");
    else printf("\n\t\t\t\tThat's a Draw!!\n");

    printf("\t\t\tYou Choice = %c, Computer Choice = %c\n\n", you, comp);
    
}