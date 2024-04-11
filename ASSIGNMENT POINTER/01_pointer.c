#include <stdio.h>

int main()
{
    char line[100];
    char *p_line = line;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", p_line);
    int i = 0;
    int countWord = 1;
    while (*(p_line + i) != '\0')
    {
        if (*(p_line + i) == ' ')
        {
            countWord++;
        }
        i++;
    }

    printf("Number of characters: %d", i);
    printf("\nNumber of words   : %d", countWord);

    return 0;
}