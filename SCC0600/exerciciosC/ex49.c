#include<stdio.h>

int main (void) {
    int size;
    scanf("%d", &size);
    int arr1[size];
    int arr2[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    int arrfinal[size*2];
    for (int i = 0; i < size*2; i++) {
        if (i % 2 == 0) {
            arrfinal[i] = arr1[i/2];
        } else {
            arrfinal[i] = arr2[i/2];
        }
    }

    for (int i = 0; i < size*2; i++) {
        printf("%d ", arrfinal[i]);
    }
}