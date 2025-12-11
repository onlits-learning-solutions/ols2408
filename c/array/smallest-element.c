#include <stdio.h>

int main(void)
{
    int arr[10],sm, pos=0;

    printf("Enter 5 elements below:\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    sm = arr[0];
    for(int i=1; i<5; i++)
    {
        if(arr[i] < sm)
        {
            sm = arr[i];
            pos = i;
        }
    }

    printf("The value of the smallest element is %d.\n", sm);
    printf("The position of the smallest element is %d.", pos);

    return 0;
}