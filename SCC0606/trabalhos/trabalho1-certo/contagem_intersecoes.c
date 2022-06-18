#include <stdio.h>
#include <stdlib.h>
#include "ordena_digitos.h"
#include "contagem_intersecoes.h"

int** definirIntervalos (FILE* arq, int num_linhas) {
    // Alocação dinâmica de uma matriz n x 2
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

    // Leitura dos dados do arquivo
    for (int i = 0; i < num_linhas; i++) {
        fscanf(arq, "%d,%d", &(intervalos[i][0]), &(intervalos[i][1]));
    }

    return intervalos;
}

void excluirIntervalo (int **intervalo, int num_linhas) {
    // Deletar o intervalo
    for (int i = 0; i < num_linhas; i++) {
        free(intervalo[i]);
    }
    free(intervalo);
}

int contagemIntersecoes (FILE *arq_A, FILE *arq_B, int nA, int nB, FILE *saida) {
    // Iniciaização dos intervalos e da contagem
    int **A = definirIntervalos(arq_A, nA); 
    int **B = definirIntervalos(arq_B, nB); 
    int *contagens = calloc(nA, sizeof(int));

    // Ordenação dos pares númericos
    ordenaNumeros(A, nA);
    ordenaNumeros(B, nB);

    // Contagem de intersecções
    int primeiro_iB = 0;
    for (int iA = 0; iA < nA; iA++) {
        for (int iB = primeiro_iB; iB < nB; iB++) {
            if (A[iA][1] < B[iB][0] || A[iA][0] > B[iB][1]) {
                if (contagens[iA] == 0) {
                    primeiro_iB = iB;
                }
            } else {
                contagens[iA]++;
            }
        }  
    }
    
    // Saída dos dados para o arquivo
    for (int i = 0; i < nA; i++) {
        fprintf(saida, "%d\n", contagens[i]);
    }

    excluirIntervalo(A, nA);
    excluirIntervalo(B, nB);

    return 0;
}