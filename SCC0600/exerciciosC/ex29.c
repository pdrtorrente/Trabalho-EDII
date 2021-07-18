#include <stdio.h>

int main (void) {
    int idade;
    scanf("%d", &idade);
    int velasarr[idade];

    int maior;
    scanf("%d", &maior);
    velasarr[0] = maior;
    for (int i = 1; i <= idade - 1; i++) {
        int inp;
        scanf("%d", &inp);
        velasarr[i] = inp;
    }

    for (int i = 0; i < idade; i++) {
        if (velasarr[i] > maior) {
            maior = velasarr[i];
        }
    }

    int counter = 0;
    for (int i = 0; i < idade; i++) {
        if (velasarr[i] == maior) {
            counter++;
        }
    }

    printf("%d\n", counter);
}