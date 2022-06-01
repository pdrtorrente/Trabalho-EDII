#include <stdio.h>
#include <stdlib.h>
#include "ordena_digitos.h"
#include "contagem_intersecoes.h"

int** definirIntervalos (FILE* arq, unsigned int num_linhas) {
    int **intervalos = malloc(sizeof(int*) * num_linhas);
    if (intervalos == NULL) {
        exit(-1);
    }
    for (int i = 0; i < num_linhas; i++) {
        intervalos[i] = malloc(sizeof(int) * 2);
        if (intervalos[i] == NULL) {
            exit(-1);
        }
    }

    for (int i = 0; i < num_linhas; i++) {
        fscanf(arq, "%d,%d", &(intervalos[i][0]), &(intervalos[i][1]));
    }

    return intervalos;
}

int contagemIntersecoes (FILE *arq_A, FILE *arq_B, int nA, int nB, FILE *saida) {
    int **A = definirIntervalos(arq_A, nA); 
    int **B = definirIntervalos(arq_B, nB); 
    int *contagens = calloc(nA, sizeof(int));

    ordenaNumeros(A, nA);
    ordenaNumeros(B, nB);

    int primeiro_iB = 0;
    for (int iA = 0; iA < nA; iA++) {
        for (int iB = 0; iB < nB; iB++) {
            if (A[iA][1] < B[iB][0] || A[iA][0] > B[iB][1]) {
                if (contagens[iA] == 0) {
                    primeiro_iB = iB;
                }
            } else {
                contagens[iA]++;
            }
        }  
    }
    
    for (int i = 0; i < nA; i++) {
        fprintf(saida, "%d\n", contagens[i]);
    }

    return 1;
}