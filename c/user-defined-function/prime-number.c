#include <stdio.h>
int countfactors(int n);    //Function declaration/prototype
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (countfactors(n) == 2) // Function Call
        printf("Prime number");
    else
        printf("Not a prime number");
    return 0;
}

// ------ Function definition ----------
int countfactors(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    return count;
}