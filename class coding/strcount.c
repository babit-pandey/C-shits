// to count words contain in the text
#include <stdio.h>
int countWords(char str[]);
int main()
{
    char str[100];
    printf("Enter your text: ");
    scanf("%[^\n]", str);
    int numWords = countWords(str);
    printf("The input string contains %d words.\n", numWords);
    return 0;
}
int countWords(char str[])
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    count++;
    return count;
}
