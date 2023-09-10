#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char str[n][100];

    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", str[i]);
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    printf("The sorted list of strings is:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
