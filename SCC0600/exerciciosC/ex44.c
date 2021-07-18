#include<stdio.h>

int main (void) {
    int size;
    scanf("%d", &size);
    int arr1[size];
    for (int j = 0; j < size; j++) {
        scanf("%d", &arr1[j]);
    }
    int arr2[size];
    for (int j = 0; j < size; j++) {
        scanf("%d", &arr2[j]);
    }
    for (int j = 0; j < size; j++) {
        printf("%d ", arr1[j] + arr2[j]);
    }

}