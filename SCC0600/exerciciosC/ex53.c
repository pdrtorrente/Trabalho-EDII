#include<stdio.h>

void summatrix (int arr[], int lines, int cols) {
    for (int i = 0; i < cols; i++) {
        int somacoluna = 0;
        for (int j = 0; j < lines; j++) {
            somacoluna += arr[i + (j * cols)];
        }
        printf("%d\n", somacoluna);
    }
}

int main (void) {
    int lines, cols;
    scanf("%d", &lines);
    scanf("%d", &cols);
    int arr[lines * cols];
    for (int i = 0; i < lines * cols; i++) {
        scanf("%d", &arr[i]);
    }    
    summatrix(arr, lines, cols);
}