#include <stdio.h>
#include <stdlib.h>
#include "ordena_digitos.h"

int main (){
    //int A[10][2];
    int** A;
    A = malloc(sizeof(int*)*10);
    for (int i = 0; i < 10; i++){
        A[i] = malloc(sizeof(int)*2);
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j<2; j++){
            A[i][j] = rand() % 10000;
        }
    }

    for (int i = 0; i < 10; i++){
        printf("%d %d\n", A[i][0], A[i][1]);
    }

    printf("\n");
/*    int** B;
    B = malloc(sizeof(int*)*10);
    for (int i = 0; i < 10; i++){
        B[i] = malloc(sizeof(int)*2);
    }*/
    ordenaNumeros(A,10);
    for (int i = 0; i < 10; i++){
        printf("%d %d\n", A[i][0], A[i][1]);
    }
}