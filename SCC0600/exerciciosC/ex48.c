#include<stdio.h>

int main (void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int maior = arr[0]; int indmaior = 0;
    int menor = arr[0]; int indmenor = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
            indmaior = i;
        }
        if (arr[i] < menor) {
            menor = arr[i];
            indmenor = i;
        }
    }
    arr[indmenor] = arr[0];
    arr[indmaior] = arr[size - 1];
    arr[0] = menor;
    arr[size - 1] = maior;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}