#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "rummy_func.c"
//Call other functions here.

void game(char p1[100], char p2[100]);
int main()
{

    int ch;
    char p1[100], p2[100];
    printf("Welcome to the Game of Rummy!\n\n");
    printf("\nNumber of players: 2\n\n");
    printf("The Rules are: \n");
    printf("\t1. Each player gets 7 cards that have to be divided into two sets.\n\tEach set contains either 3 or 4 cards.\n");
    printf("\t2. The cards in each set have to be ordered either in ascending order of the same suit OR same value but from different suits.\n");
    printf("\t3. A JOKER card has been provided to be used as any card within one set.\n");
    printf("\t4. Your cards will be displayed at each turn. You don't have to keep a separate count of the same.\n");
    printf("\n\n\t\tThis game has been designed to depict the game in the best possible way.\n\n");
    printf("\t\t ENJOY");
    printf("\n\nAre you ready to play?\nEnter 1 for Yes and 0 for No: ");
    scanf("%d",&ch);
    if (ch == 1)
    {
        system("cls");
        printf("Player 1.\nPlease enter your name: ");
        scanf("%s",p1);
        printf("\n\nPlayer 2.\nPlease enter your name: ");
        scanf("%s",p2);
        game(p1,p2);

    }

    else if (ch == 0)
    {
        printf("\nThank you for coming.\n");
        exit(1);
    }
}

void game(char p1[100], char p2[100])
{
    int x;
    while(1)
    {
        system("cls");
        printf("%s's turn to play.\n",p1);
        call();
        printf("\nAre you satisfied: ");
        scanf("%d",&x);
        system("cls");
        printf("%s's turn to play.\n",p2);
        call();
        printf("\nAre you satisfied: ");
        scanf("%d",&x);
    }

}
