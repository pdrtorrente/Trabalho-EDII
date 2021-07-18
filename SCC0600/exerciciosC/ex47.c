#include<stdio.h>

int main (void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int param;
    scanf("%d", &param);
    int cont = 0;
    int arrfinal[size];
    for (int i = 0; i < size; i++) {
        if (arr[i] > param) {
            arrfinal[cont] = arr[i];
            cont++;
        }
    }
    for (int i = 0; i < cont; i++) {
        printf("%d ", arrfinal[i]);
    }

}