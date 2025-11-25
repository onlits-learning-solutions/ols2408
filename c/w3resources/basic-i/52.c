#include <stdio.h>
int main(void)
{
    int arr[6], sm, in = 0;
    printf("Enter the array elements:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    sm = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] < sm)
        {
            sm = arr[i];
            in = i;
        }
    }
    printf("The value of smallest integer: %d\n", sm);
    printf("Position number: %d", in);
    return 0;
}

