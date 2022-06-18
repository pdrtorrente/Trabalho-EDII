#include <stdio.h>
#include <stdlib.h>
#include "ordena_digitos.h"

int ordenaDigitos(int** A, int n, int posicao){
    int digito, B[10];
    // Alocação dinâmica da matriz C (n x 2)
    int **C = malloc(sizeof (int*) * n);
    for (int i = 0; i < n; i++) {
        C[i] = malloc(sizeof (int) * 2);
    }

    // Zera todos os valores de B
    for (int i = 0; i < 10; i++){
        B[i] = 0;
    }

    for(int i = 0; i < n; i++){
        digito = A[i][0] / posicao;
        digito = digito % 10; //Seleciona o digito
        B[digito] = B[digito] + 1;
    }

    // Soma ao B atual o B anterior
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

    // Copia C para A e libera a memória
    for (int i = 0; i < n; i++){
        A[i][0] = C[i][0];
        A[i][1] = C[i][1];
        free(C[i]);
    }
    free(C);

    return 1;
}

int ordenaNumeros(int** A, int n){
    int maior = A[0][0]; // atribui como se o maior já fosse o primeiro número
    for (int i = 1; i < n; i++){
        if (A[i][0] > maior){ // testa se o da posição atual é maior que o maior já achado
            maior = A[i][0];
        }
    }
    int posicao = 1;

    while(maior/posicao > 0){
        ordenaDigitos(A,n,posicao);
        posicao = posicao*10;
    }

    return 1;
}