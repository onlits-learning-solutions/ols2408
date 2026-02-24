#include <stdio.h>
#include <stdlib.h>

int *merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n);
void display(int *nums, int m);

int main(void)
{
    int num1Size = 10, num2Size = 10, m = 3, n = 3;
    int nums1[10] = {1, 2, 3};
    int nums2[10] = {2, 5, 6};

    int *nums3 = merge(nums1, num1Size, m, nums2, num2Size, n);

    display(nums3, 6);

    return 0;
}

int *merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int *nums3 = calloc(m + n, sizeof(int));
    int o = 0;
    for (int i = 0; i < m; i++)
    {
        nums3[o] = nums1[i];
        o++;
    }
    for (int i = 0; i < n; i++)
    {
        nums3[o] = nums2[i];
        o++;
    }
    return nums3;
}

void display(int *nums, int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("%d ", nums[i]);
    }
}