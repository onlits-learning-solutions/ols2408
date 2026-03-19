#include "linkedlist.h"

void display(NODE *head)
{
    NODE *itr = head;
    while (itr != NULL)
    {
        printf("%d -> ", itr->data);
        itr = itr->next;
    }
    printf("NULL\n");
}