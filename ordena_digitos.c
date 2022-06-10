#include <stdio.h>
#include <stdlib.h>
#include "ordena_digitos.h"

int ordenaDigitos(int** A, int n, int posicao){
    int digito, B[10];
    int **C = malloc(sizeof (int*) * n);
    for (int i = 0; i < n; i++) {
        C[i] = malloc(sizeof (int) * 2);
    }

    for (int i = 0; i < 10; i++){
        B[i] = 0;
    }

    for(int i = 0; i < n; i++){
        digito = A[i][0] / posicao;
        digito = digito % 10;
        B[digito] = B[digito] + 1;
    }

    for (int i = 1; i < 10; i++){
        B[i] = B[i] + B[i-1];
    }

    for (int i = n - 1; i >= 0; i--){
        digito = A[i][0] / posicao;
        digito = digito % 10;
        B[digito] = B[digito] - 1;
        C[B[digito]][0] = A[i][0];
        C[B[digito]][1] = A[i][1];
    }

    for (int i = 0; i < n; i++){
        A[i][0] = C[i][0];
        A[i][1] = C[i][1];
        free(C[i]);
    }

    free(C);

    return 1;
}

int ordenaNumeros(int** A, int n){
    int maior = A[n-1][0];
    int posicao = 1;

    while(maior/posicao > 0){
        ordenaDigitos(A,n,posicao);
        posicao = posicao*10;
    }

    return 1;
}