#include <stdio.h>
int main(void)
{
    int days, weeks=0, years=0;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    if(days >= 365)
    {
       years = days / 365;
       days = days % 365; 
    }
    if(days >= 7)
    {
        weeks = days / 7;
        days = days % 7;
    }
    printf("%d years, %d weeks and %d days.", years, weeks, days);
    return 0;
}