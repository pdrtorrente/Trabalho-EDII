#include<stdio.h>

int main (void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i += 2) {
        if (size % 2 == 0 || i != size - 1) {
            int m = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = m;
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}