#include <stdio.h>

int main (void) {
    int idade; char *res = "DISPENSADO";
    scanf("%d", &idade);

    if (idade >= 16 && idade < 18) {
        res = "FACULTATIVO";
    } else if (idade >= 18 && idade < 70) {
        res = "OBRIGATORIO";
    }

    printf("%s\n", res);
}