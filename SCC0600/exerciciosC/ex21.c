#include <stdio.h>

int main (void) {
    float limite; float valor1; float valor2; float kms; float total;
    scanf("%f", &limite);
    scanf("%f", &valor1);
    scanf("%f", &valor2);
    scanf("%f", &kms);

    if (kms <= limite) {
        total = valor1 * kms;
    } else {
        total = valor2 * kms;
    }

    printf("%.2f\n", total);
}