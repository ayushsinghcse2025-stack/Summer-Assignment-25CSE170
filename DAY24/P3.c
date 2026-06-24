#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], longest[100];
    int i, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char word[100];

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n')
        {
            word[j] = '\0';

            if(j > maxLen)
            {
                maxLen = j;
                strcpy(longest, word);
            }

            j = 0;

            if(str[i] == '\0' || str[i] == '\n')
                break;
        }
        else
        {
            word[j++] = str[i];
        }
    }

    printf("Longest word: %s\n", longest);

    return 0;
}