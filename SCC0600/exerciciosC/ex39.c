#include<stdio.h>

int main (void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int pos = 0;
    int maior = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > maior) {
            pos = i;
            maior = arr[i];
        }
    }
    printf("%d\n%d", maior, pos);
}