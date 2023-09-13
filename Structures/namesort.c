#include <stdio.h>
#include <string.h>
struct person {
    char name[50];
    char address[50];
};

int main() {
    
    struct person p[50];

    for (int i = 0; i < 50; i++) {
        printf("Enter the name of person %d: ", i + 1);
        scanf("%s", p[i].name);
        printf("Enter the address of person %d: ", i + 1);
        scanf("%s", p[i].address);
    }

    for (int i = 0; i < 49; i++) {
        
            if (strcmp(p[i].name, p[i+1].name) > 0) {
                struct person temp = p[i];
                p[i] = p[i+1];
                p[i+1] = temp;
            }
        
    }

    printf("\nThe sorted records of the persons are as follows:\n");
    printf("Person\tName\t\tAddress\n");

    for (int i = 0; i < 50; i++) {
        printf("%d\t%s\t\t%s\n", i + 1, p[i].name, p[i].address);
    }
    return 0;
}
