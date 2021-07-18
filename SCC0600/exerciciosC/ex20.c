#include <stdio.h>
#include <math.h>

int main (void) {
    float largura; float altura; float custo; float rendimento;
    scanf("%f", &largura);
    scanf("%f", &altura);
    scanf("%f", &custo);
    scanf("%f", &rendimento);

    int area = largura * altura;
    int latas = ceil(area / rendimento);
    float total = latas * custo;

    printf("%d\n", latas);
    printf("%.2f\n", total);
}