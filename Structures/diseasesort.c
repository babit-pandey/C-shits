#include <stdio.h>
struct patient {
    char name[50];
    char disease[50];
};
int main() {
    struct patient p[20];
    for (int i = 0; i < 20; i++) {
        printf("Enter the data for patient %d\n", i+1);
        printf("Enter the name of patient: ");
        scanf("%s", p[i].name);
        printf("Enter the disease of patient: ");
        scanf("%s", p[i].disease);
    }
    for (int i = 0; i < 19; i++) {
            if (strcmp(p[i].disease, p[i+1].disease) > 0) {
                struct patient temp = p[i];
                p[i] = p[i+1];
                p[i+1] = temp;
            }
    }
  printf("\nThe sorted records of the Patients in tabular form are as follows:\n");
    printf("S/N\tName\t\tDisease\n");

    for (int i = 0; i < 20; i++) {
        printf("%d\t%s\t\t%s\n", i + 1, p[i].name, p[i].disease);
    }
    return 0;
}