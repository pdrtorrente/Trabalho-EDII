#include <stdio.h>

int primo (int n) {
    int prime = 1;
    for (int i = 2; i < n; i++) {
        if ( n % i == 0 ) {
            prime = 0;
            break;
        }
    }

    if (n <= 1) {
        prime = 0;
    }

    return prime;
}

int main (void) {
    int num; int soma = 0;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (primo(i)) {
            soma += i;
        }
    }

    printf("%d\n", soma);
}