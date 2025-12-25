#include <stdio.h>

int main(void)
{
    int i = 0;
    char str1[100], str2[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str1);

    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("First string: %s\n", str1);
    printf("Second string: %s", str2);
    return 0;
}