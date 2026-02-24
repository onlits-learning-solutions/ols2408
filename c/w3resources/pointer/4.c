/*
4. Add Two Numbers with Pointers

Write a program in C to add two numbers using pointers. Software Development Kits

Test Data :
Input the first number : 5
Input the second number : 6

Expected Output :

The sum of the entered numbers is : 11 
*/

#include <stdio.h>

int main(void)
{
    int a, b, c;
    int *p = &a, *q = &b, *r = &c;

    printf("Input the first number : ");
    scanf("%d", p);
    printf("Input the second number : ");
    scanf("%d", q);
    *r = *p + *q;
    printf("The sum of the entered numbers is : %d", *r);
    
    return 0;
}