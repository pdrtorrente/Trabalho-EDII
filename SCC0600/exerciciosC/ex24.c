#include <stdio.h>

int main (void) {
    int num; 
    scanf("%d", &num);
    
    int maior = 0;
    scanf("%d", &maior);
    int menor = maior;
    int soma = maior;

    for (int i = 0; i < num - 1; i++) {
        int newnum;
        scanf("%d", &newnum);

        if (newnum > maior) {
            maior = newnum;
        }
        if (newnum < menor) {
            menor = newnum;
        }
        soma += newnum;
    }

    printf("%d\n", maior);
    printf("%d\n", menor);
    printf("%d\n", soma);
}