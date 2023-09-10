#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    char *ptr;
    printf("Enter the string: ");
    scanf("%s", str);
    ptr = str;
    while (*ptr != '\0')
    {
        ptr++;
    }
    while (ptr >= str)
    {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");
    return 0;
}