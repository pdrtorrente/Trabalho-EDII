#include<stdio.h>

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

int main (void) {
    int num;
    scanf("%d", &num);
    int casas = getcasas(num);
    int arrdigits[casas];
    getdigits(num, casas, arrdigits);
    char res = 'S';
    for (int i = 0; i < casas/2; i++) {
        if (arrdigits[i] != arrdigits[casas - 1 - i]) {
            res = 'N';
        }
    }
    printf("%c\n", res);
}