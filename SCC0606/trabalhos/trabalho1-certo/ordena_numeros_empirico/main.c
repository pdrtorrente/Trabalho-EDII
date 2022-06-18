#include "lista.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ordena_digitos.h"

#define TAM_MAX 10000000000

int main(void) {
    int **l;
    clock_t t;
    
    srand(clock());

    unsigned long int TAM = 1000;
    while (TAM <= TAM_MAX) {
        l = criar(TAM);
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < 2; j++){
                l[i][j] = rand() % 1000;
            }      
        }

        t = clock();
        ordenaNumeros(l, TAM);
        t = clock() - t;

        // destroi a lista
        destruir(l, TAM);   
        printf("[%d] Tempo (segundos): %lf\n", TAM, ((double)t)/((CLOCKS_PER_SEC/1000)));
        
        TAM *= 10;
    }

    return 0; // sucesso
}
