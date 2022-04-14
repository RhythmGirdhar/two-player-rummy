#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARD_MAX 52
typedef int Deck[CARD_MAX];

void setupDeck(Deck);
void shuffle(Deck);
void printCard(int);
void printDeck(Deck);
void pickCards(Deck);
void printDeck2(Deck);
void pickCards2(Deck);
void deleteCard(Deck, int);

int main()
{
    int x;
    Deck d;
    setupDeck(d);
    pickCards(d);
    //printDeck(d);
    printDeck2(d);
    while(x)
    {
        pickCards(d);
        printDeck2(d);
        scanf("%d",&x);
        if (x==0)
            break;
    }
}

void setupDeck(Deck deck)
{
    int i;
    for (i=0;i<CARD_MAX;i++)
    {
        deck[i] = i;
    }
}

void printCard(int card)
{
    static char *suits = "SDHC";
    static char faces[13] = {'A','2','3','4','5','6','7','8','9','X','J','Q','K'};
    printf ("%c%c", faces[card%13], suits[card/13]);
}

void printDeck(Deck deck)
{
    int i;

    printf ("\n\nDeck: \n _____________ \n");

    for (i=0;i<CARD_MAX;i++)
    {
        printCard(deck[i]);
        printf(" ");
    }
}

void pickCards(Deck deck)
{
    int i=0;
    printf ("\n\nYour Cards are: \n--------------------\n");
    srand( time( NULL ) );
    printf("%d is your card \n",deck[i]);
    for (i=0;i<7;i++)
    {
        int i = rand() % 52;
        printCard(deck[i]);
        deleteCard(deck,deck[i]);
        printf ("\n");
    }
    printf ("\n");
}

void deleteCard(Deck deck, int card)
{
    int i = card;
    int j,k, temp;
    for(j=0; j< CARD_MAX; j++)
    {
        if(deck[j]== i)
        {
            temp=1;
            k=j;
            break;
        }
    }

    if(temp==1)
    {
        for(j=k; j<(CARD_MAX-1); j++)
        {
            deck[j]= deck[j+1];
        }
    }
}

//After Shuffling
void printDeck2(Deck deck)
{

    int i;
    printf ("\n\nDeck: \n _____________ \n");
    for (i=0;i<(CARD_MAX-7);i++)
    {
        printCard(deck[i]);
        printf (" ");
    }
    printf ("\n");
}
