#include <stdio.h>
int main(void)
{
    char name[30];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Good morning! %s", name);
    return 0;
}