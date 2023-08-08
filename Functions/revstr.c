// to reverse the string
#include <stdio.h>
#include <string.h>
void reverse(char word[]);
int main()
{
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    reverse(input);
    printf("Reversed string: %s\n", input);
    return 0;
}
void reverse(char word[])
{
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = word[i];
        word[i] = word[length - i - 1];
        word[length - i - 1] = temp;
    }
}