#include "linkedlist.h"

NODE* insert_end(NODE *head, int val)
{
    NODE *newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data = val;
    newnode->next = NULL;

    if (head == NULL)
    {
        return newnode;
    }

    NODE *itr = head;
    while (itr->next != NULL)
    {
        itr = itr->next;
    }

    itr->next = newnode;
    
    return head;
}

NODE* insert_beginning(NODE *head, int val)
{
    NODE *newnode = (NODE*)malloc(sizeof(NODE));
    newnode->data = val;
    newnode->next = head;
    
    return newnode;
}