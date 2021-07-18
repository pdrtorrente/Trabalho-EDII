#include <stdio.h>
#include <math.h>

int modulo (int value) {
    if (value < 0) {
        return -value;
    }
  return value;  
}

int somadigitos (long n) {
    int casas = 0;
    while (pow(10, casas) <= n) {
        casas++;
    }

    int soma = 0;
    long long newnum = n;
    for (int i = casas - 1; i >= 0; i--) {
        long double pot = pow(10, i);
        int digito = newnum / pot;
        newnum -= digito * pot;
        soma += digito;
    }

    return soma;
}

int main (void) {
    long long a;
    scanf("%ld", &a);
    printf("%d\n", somadigitos(modulo(a)));
}