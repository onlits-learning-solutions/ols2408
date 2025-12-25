/*
7. Count Alphabets, Digits, Specials

Write a program in C to count the total number of alphabets, digits and special characters in a string.

Test Data :
Input the string : Welcome to w3resource.com

Expected Output :

Number of Alphabets in the string is : 21
Number of Digits in the string is : 1
Number of Special characters in the string is : 4
*/

#include <stdio.h>

int main(void)
{
    int i = 0, alphabet = 0, digit = 0, special = 0;
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i <= 'z']))
            alphabet++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else
            special++;
        i++;
    }

    printf("Alphabet: %d\n", alphabet);
    printf("Digits: %d\n", digit);
    printf("Special: %d", special);

    return 0;
}