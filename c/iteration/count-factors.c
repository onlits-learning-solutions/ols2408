#include <stdio.h>
int main(void)
{
    int n, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    printf("There are %d factors of %d.", count, n);
    return 0;
}