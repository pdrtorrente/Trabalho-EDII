#include <stdio.h>
#include <math.h>

int main(void) {
    float a; float b; float c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float delta = (b * b) - (4 * a * c);

    if (delta >= 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);

        float soma = x1 + x2;

        printf("%.2f\n", soma);
    } else {
        printf("%s\n", "nan");
    }
}