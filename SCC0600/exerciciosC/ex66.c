#include<stdio.h>
#include<math.h>

int getcasas (int inp) {
    int i = 0;
    while (inp > 0)
    {
        inp /= 10;
        i++;
    }
    return i; 
}

int pot (int n1, int n2) {
    long int res = 1;
    for (int i = 1; i <= n2; i++) {
        res *= n1;
    }
    return res;
}

void getdigits (int n, int casas, int destination[]) {
    int casasm = casas - 1;
    for (int i = casasm; i >= 0; i--) {
        long int potencia = pot(10, i);
        destination[casasm - i] = n / potencia;
        n -= destination[casasm - i] * potencia;
    }
}

void error () {
    printf("0");
    return;
}

int main (void) {
    int inp;
    scanf("%d", &inp);
    if (inp < 0) {
        error();
        return -1;
    }
    int casas = getcasas(inp);
    int digits[casas];
    getdigits(inp, casas, digits);

    int soma = 0;
    for (int i = 0; i < casas; i++) {
        if (digits[i] > 1) {
            error();
            return -1;
        }
        int potencia = pow(2, casas - 1 - i);
        soma += (potencia * digits[i]);
    }

    printf("%d", soma);
}