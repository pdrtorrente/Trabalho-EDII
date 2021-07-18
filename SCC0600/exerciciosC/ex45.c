#include<stdio.h>

int main (void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    int maior = i < j ? j : i;
    int menor = i < j ? i : j;
    if (menor < 0 || maior >= size) {
        printf("%s", "INVALIDO");
        return -1;
    }
    int soma = 0;
    for (int k = menor; k <= maior; k++) {
        soma += arr[k];
    }
    printf("%d", soma);
}