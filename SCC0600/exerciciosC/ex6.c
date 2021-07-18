#include <stdio.h>

int main (void) {
    int n; int c; int m;
    scanf("%d", &n); //dinheiro
    scanf("%d", &c); //preço
    scanf("%d", &m); //número de embalagens da promoção

    int comidos = n / c;
    int embalagens = comidos;

    while (embalagens >= m) {
        int trocadas = embalagens / m;
        embalagens = trocadas + (embalagens % m);
        comidos += trocadas;
    }

    printf("%d\n", comidos);
}