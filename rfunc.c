#include"rhead.h"

void delete_pos(struct node **p, int x)
{
 struct node *q;
 q=*p;
 int i=1;
 while((q!=NULL)&&(i<x))
   {
    i++;
    q=q->next;
   }
 if(q!=NULL)
 {
    if((q->next==NULL)&&(q->prev==NULL))
      *p=NULL;
    else if(q->prev==NULL)
      {
         *p=q->next;
         (*p)->prev=NULL;
      }
    else if(q->next==NULL)
        q->prev->next=NULL;
    else
      {
        q->prev->next=q->next;
        q->next->prev=q->prev;
       }
  }
  else
   printf("Invalid Position\n");
}

void insert_head(struct node **p,int x)
{

 struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
 temp->prev=temp->next=NULL;

 if(*p==NULL)
  *p=temp;
else
  {
     temp->next=*p;
     (*p)->prev=temp;
     *p=temp;
  }
}

void display(struct node *p)
{
   if(p==NULL)
     printf("\nEmpty List..\n");
  else
  {
   while(p!=NULL)
    {
    printf("%d<->",p->data);
    p=p->next;
   }
  }
}


/*
void printDeck2(Deck deck)
{

    int i;
    printf ("\n\nDeck: \n _____________ \n");
    srand( time( NULL ) );
    for (i=0;i<CARD_MAX;i++) {
        int i = rand() % 51;
        printCard(deck[i]);
        printf (" ");
    }
    printf ("\n");
}

void pickCards2(Deck deck)
{

    int i=0;
    printf ("\n\nPicked Cards: \n _____________ \n");
    srand( time( NULL ) );
    for (i=0;i<5;i++)
    {
        int i = rand() % 50;
        printCard(deck[i]);
        printf ("\n");
    }
    printf ("\n");
}
*/
