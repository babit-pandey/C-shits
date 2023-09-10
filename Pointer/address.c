#include <stdio.h>

int main() {
    char *cityInfo[3];
    cityInfo[0] = "City: Kathmandu, Address: Anamnagar";
    cityInfo[1] = "City: Pokhara, Address: Birauta";
    cityInfo[2] = "City: Lalitpur, Address: Lazim Park";

    printf("City Information in Nepal:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", cityInfo[i]);
    }

    return 0;
}
