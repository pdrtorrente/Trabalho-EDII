#include<stdio.h>

int main (void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int num;
    scanf("%d", &num);
    
    int arrfinal[size];
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            continue;
        }
        arrfinal[counter] = arr[i];
        counter++;
    }

    for (int i = 0; i < counter; i++) {
        printf("%d ", arrfinal[i]);
    }
}