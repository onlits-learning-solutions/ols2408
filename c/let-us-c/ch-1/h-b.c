#include <stdio.h>

int main(void)
{
    int km, mts, ft, inch, cm;
    printf("Enter distance in km: ");
    scanf("%d", &km);
    mts = km * 1000;
    ft = mts * 3.28084;
    inch = ft * 12;
    cm = mts * 100;
    printf("Distance in meters: %d\n", mts);
    printf("Distance in feet: %d\n", ft);
    printf("Distance in inch: %d\n", inch);
    printf("Distance in centimeters: %d", cm);
    return 0;
}