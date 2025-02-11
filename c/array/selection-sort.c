#include <stdio.h>
#define N 5
int main(void)
{
    int arr[N];
    printf("Enter %d elements below:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("Sorted array is:\n");
    for(int i=0; i<N; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}