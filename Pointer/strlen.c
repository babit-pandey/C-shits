#include <stdio.h>
#include <string.h>

int main() {
    char city[100];

    printf("Enter the name of the city: ");
    scanf("%s", city);

    int len = strlen(city);

    printf("Location and length of characters in the city name:\n");
    for (int i = 0; i < len; i++) {
        printf("Character at location %d: %c, Length: %d\n", i, *(city + i), len);
    }

    return 0;
}
