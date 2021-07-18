#include<stdio.h>

int main (void) {
    int size1;
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    int size2;
    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int counter = 0;
    int jcounter = 0;
    int sizefinal = size1 + size2;
    int arrfinal[sizefinal];
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] <= arr2[jcounter]) {
                arrfinal[counter] = arr1[i];
                counter++;
                break;
            } else {
                arrfinal[counter] = arr2[jcounter];
                jcounter++;
                counter++;
            }
        }
        if (i == size1 -1) {
            for (int k = jcounter; k < size2; k++)
            {
                arrfinal[counter] = arr2[k];
                counter++;
            }
            
        }
    }

    for (int i = 0; i < sizefinal; i++) {
        printf("%d ", arrfinal[i]);
    }
}