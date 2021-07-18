#include <stdio.h>

int main (void) {
    int l1; int l2; int l3; char *tipo = "ESCALENO";
    scanf("%d", &l1);
    scanf("%d", &l2);
    scanf("%d", &l3);

    if (l1 + l2 < l3 || l1 + l3 < l2 || l2 + l3 < l1) {
        tipo = "INVALIDO";
    } else if (l1 == l2 && l2 == l3) {
        tipo = "EQUILATERO";
    } else if (l1 == l2 || l2 == l3 || l1 == l3) {
        tipo = "ISOSCELES";
    }

    printf("%s\n", tipo);
}