#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  char suit;
  struct node *prev,*next;
};

void display(struct node*);
void insert_head(struct node**,int,int);
void delete_pos(struct node**,int,int);
