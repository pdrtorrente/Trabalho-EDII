#include<stdio.h>

void summatrix (int arr[], int lines, int cols) {
    int counter = 0;
    for (int i = 0; i < lines; i++) {
        int somalinha = 0;
        for (int j = 0; j < cols; j++) {
            somalinha += arr[counter];
            counter++;
        }
        printf("%d\n", somalinha);
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