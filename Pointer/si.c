#include <stdio.h>

void SI(float *p, float *r, float *t, float *i) {
    *i = (*p * *r * *t) / 100.0;
}

int main() {
    float p, r, t, i;

    printf("Enter principal:, rate, time respectively: ");
    scanf("%f %f %f", &p, &r, &t);

    SI(&p, &r, &t, &i);

    printf("Simple Interest = %.2f\n", i);

    return 0;
}
