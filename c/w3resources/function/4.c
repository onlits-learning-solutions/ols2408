/*
4. Even/Odd Check Function Variants

Write a program in C to check if a given number is even or odd using the function.

Test Data :

Input any number : 5

Expected Output :

 The entered number is odd.
*/

#include <stdio.h>

int evenorodd(int n);

int main(void)
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = evenorodd(n);
    if(result == 0)
        printf("Even: %d", result);
    else
        printf("Odd: %d", result);

    return 0;
}


int evenorodd(int n)
{
    return n % 2;
}