#include <stdio.h>
struct person {
    char name[20];
    char district[20];
};
int main() {
    struct person p;
    printf("Enter your name: ");
    scanf("%s", p.name);
    printf("Enter your district: ");
    scanf("%s", p.district);
    printf("Your name is %s and you are from %s.\n", p.name, p.district);
    return 0;
}