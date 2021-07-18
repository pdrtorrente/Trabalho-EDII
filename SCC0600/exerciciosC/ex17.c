#include <stdio.h>

int main (void) {
    int a; int b; int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    printf("%d\n", maior);
}