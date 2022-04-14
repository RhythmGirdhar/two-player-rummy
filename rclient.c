#include "rhead.h"

void insert_head(struct node**deck,int j,int i)
{
    printf("\nDone\n");
}
int main()
{
    //deck initialisation
    struct node *deck;
    deck=NULL;
    int i,j;
    for(i=1;i<=4;i++)
    {
        for (j=1;j<=13; j++)
        {
            insert_head(&deck,j,i);
        }
    }

    struct node *player1, *player2;
    player1=player2=NULL;
    printf("Done.\n");

}
