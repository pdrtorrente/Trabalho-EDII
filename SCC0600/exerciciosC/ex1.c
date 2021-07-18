#include <stdio.h>

int main(void) {
    int a; int b;
    scanf("%d", &a);
    scanf("%d", &b);

    int maior = a;
    if (b > maior) {
        maior = b;
    }

    printf("%d\n", maior);
}