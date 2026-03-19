#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

/*--------------- common.c ----------*/
void display(NODE *head);

/*--------------- insert.c ---------*/
NODE* insert_end(NODE *head, int val);
NODE* insert_beginning(NODE *head, int val);