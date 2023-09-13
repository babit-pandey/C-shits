#include <stdio.h>

struct M {
    char n[20];
    float i;
    float e;
};

int main() {
    struct M m[12];
    float ti = 0;
    float te = 0;
    
    for (int i = 0; i < 12; i++) {
        printf("Enter the name of the month: ");
        scanf("%s", m[i].n);
        printf("Enter the income for the month: ");
        scanf("%f", &m[i].i);
        printf("Enter the expenditure for the month: ");
        scanf("%f", &m[i].e);
        ti += m[i].i;
        te += m[i].e;
    }

    printf("\nTotal income for the year: %.2f\n", ti);
    printf("Total expenditure for the year: %.2f\n", te);
    printf("Average income for the year: %.2f\n", ti / 12);
    printf("Average expenditure for the year: %.2f\n", te / 12);

    return 0;
}
