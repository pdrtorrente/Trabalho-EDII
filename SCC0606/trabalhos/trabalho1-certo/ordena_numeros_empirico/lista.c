#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int** criar(int TAM) {
    int **A = malloc(TAM * sizeof(int*));
    for (int i = 0; i < TAM; i++) {
        A[i] = malloc(2 * sizeof(int));
    }

    return A;
}

void destruir(int **A, int TAM) {
    for (int i = 0; i < TAM; i++) {
        free(A[i]);
    }
    free(A);
}