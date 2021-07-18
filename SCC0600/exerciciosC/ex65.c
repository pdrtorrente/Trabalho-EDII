#include<stdio.h>

void binprint (int inp) {
    if (!inp) {
        printf("0");
        return;
    }
    int size = 0;
    int num1 = inp;
    while (num1 > 0) {
        num1 /= 2;
        size++;
    }
    int arr[size];
    int num2 = inp;
    for (int i = size - 1; i >= 0; i--) {
        arr[i] = num2 % 2;
        num2 /= 2;
    }
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
}

int main (void) {
    int bin;
    scanf("%d", &bin);
    binprint(bin);
}