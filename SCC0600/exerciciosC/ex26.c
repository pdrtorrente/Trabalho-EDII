#include <stdio.h>

int main (void) {
    int demaior = 0; float pidosos; float soma = 0; float idosos = 0.0f;

    int checker = 1; int i = 0;
    while (checker >= 0) {
        int newidade;
        scanf("%d", &newidade);
        if (newidade >= 0) {
            soma += newidade;
            if (newidade >= 18) {
                demaior++;
            }
            if (newidade > 75) {
                idosos++;
            }

            i++;
        }
        checker = newidade;
    }

    float media = soma  / i;
    pidosos = idosos * 100 / i;
    char spidosos[10];
    sprintf(spidosos, "%.2f%%", pidosos);

    printf("%.2f\n", media);
    printf("%d\n", demaior);
    printf("%s\n", spidosos);

}