#include <stdio.h>

int main (void) {
    int finished = 0; int somapar = 0; int somaimpar = 0; int soma = 0;
    while (!finished)
    {
        int a;
        scanf("%d", &a);

        if (a == 0) {
            break;
        }

        if (a % 2 == 0) {
            somapar += a;
        } else {
            somaimpar += a;
        }

        soma += a;
    }
    
    printf("%d\n", somapar);
    printf("%d\n", somaimpar);
    printf("%d\n", soma);
}