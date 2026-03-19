#include "linkedlist.h"

int main(void)
{
    NODE *head = NULL;

    printf("\nTesting display():\n");
    display(head);

    printf("\nTesting insert_end():\n");
    head = insert_end(head, 10);
    head = insert_end(head, 20);
    head = insert_end(head, 30);
    display(head);

    printf("\nTesting insert_beginning():\n");
    head = insert_beginning(head, 40);
    head = insert_beginning(head, 50);
    head = insert_beginning(head, 60);
    display(head);
}