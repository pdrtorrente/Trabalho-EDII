#include<stdio.h>

void reversearr (int arr[], int size) {
    for (int i = 0; i < size/2; i++) {
        int lastindex = size -1;
        int save = arr[i];
        arr[i] = arr[lastindex - i];
        arr[lastindex - i] = save;
    }
}

int main (void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }    
    reversearr(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}