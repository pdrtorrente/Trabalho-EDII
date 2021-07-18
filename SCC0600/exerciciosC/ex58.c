#include<stdio.h>

void printmatrix (int arr[], int lines, int cols) {
    int counter = 0;
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[counter]);
            counter++;
        }
        printf("\n");
    }
}

void printtransposedmatrix (int arr[], int lines, int cols) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < lines; j++) {
            printf("%d ", arr[i + (j * cols)]);
        }
        printf("\n");
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
    printmatrix(arr, lines, cols);
    printf("\n");
    printtransposedmatrix(arr, lines, cols);
}