#include <stdio.h>

int main(void)
{
    char sentence[100];
    int i = 0, words = 1;
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);
    while (sentence[i] != '\0')
    {
        if (sentence[i] == ' ')
        {
            words++;
        }
        i++;
    }
    printf("The sentence has %d words.", words);
    return 0;
}