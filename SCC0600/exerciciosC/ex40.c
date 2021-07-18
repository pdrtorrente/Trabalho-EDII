#include<stdio.h>

int main (void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int search;
    scanf("%d", &search);
    int res = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            res = i;
            break;
        }
    }
    printf("%d", res);
}