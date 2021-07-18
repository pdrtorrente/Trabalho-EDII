#include <stdio.h>

int main (void) {
    float salario; float vendas;
    scanf("%f", &salario);
    scanf("%f", &vendas);

    float total = salario + (vendas * 0.18);

    printf("%.2f\n", total);
}