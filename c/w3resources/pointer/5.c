/*
5. Add Numbers Using Call by Reference

Write a program in C to add numbers using call by reference.

Test Data :
Input the first number : 5
Input the second number : 6

Expected Output :

 The sum of 5 and 6  is 11
*/

#include <stdio.h>

int sum(int *a, int *b);

int main(void)
{
    int a, b;
    printf("Input the first number : ");
    scanf("%d", &a);
    printf("Input the second number: ");
    scanf("%d", &b);
    printf("The sum of %d and %d is %d", a, b, sum(&a, &b));
    return 0;
}

int sum(int *a, int *b)
{
    return *a + *b;
}