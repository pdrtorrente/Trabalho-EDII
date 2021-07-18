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

    int sizefinal = size1 + size2;
    int arrfinal[sizefinal];
    if (size1 >= size2) {
        // A COMEÇA
        int counter = 0, counter1 = 0, counter2 = 0;
        for (int i = 0; i < sizefinal; i++) {
            if (counter2 < size2) {
                if (i % 2 == 0) {
                    arrfinal[counter] = arr1[counter1];
                    counter1++;
                } else {
                    arrfinal[counter] = arr2[counter2];
                    counter2++;
                }
            } else {
                arrfinal[counter] = arr1[counter1];
                counter1++;
            }
            counter++;
        }
    } else {
        // B COMEÇA
        int counter = 0, counter1 = 0, counter2 = 0;
        for (int i = 0; i < sizefinal; i++) {
            if (counter1 < size1) {
                if (i % 2 == 0) {
                    arrfinal[counter] = arr2[counter2];
                    counter2++;
                } else {
                    arrfinal[counter] = arr1[counter1];
                    counter1++;
                }
            } else {
                arrfinal[counter] = arr2[counter2];
                counter2++;
            }
            counter++;
        }
    }

    for (int i = 0; i < sizefinal; i++) {
        printf("%d ", arrfinal[i]);
    }
}