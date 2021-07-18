#include<stdio.h>

int main (void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int ind, num;
    scanf("%d", &ind);
    
    if (ind < 0 || ind > size - 1) {
        printf("INVALIDO");
        return -1;
    }
    
    int arrfinal[size - 1];
    int counter = 0;
    for (int i = 0; i < size + 1; i++) {
        if (i == ind) {
            arrfinal[i] = num;
            continue;
        }
        arrfinal[i] = arr[counter];
        counter++;
    }

    for (int i = 0; i < size - 1; i++) {
        printf("%d ", arrfinal[i]);
    }
}