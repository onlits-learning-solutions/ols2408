#include <stdio.h>

int main(void)
{
    int n, f = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        f = f * i;
    }

    printf("Factorial: %d", f);

    return 0;
}