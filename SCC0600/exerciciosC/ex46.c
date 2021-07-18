#include<stdio.h>

int main (void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    int contpar = 0;
    int arrpar[size];
    int arrimpar[size];
    int contimpar = 0;
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            arrpar[contpar] = arr[i];
            contpar++;
        } else {
            arrimpar[contimpar] = arr[i];
            contimpar++;
        }
    }
    for (int i = 0; i < contpar; i++) {
        printf("%d ", arrpar[i]);
    }
    printf("\n");
    for (int i = 0; i < contimpar; i++) {
        printf("%d ", arrimpar[i]);
    }

}