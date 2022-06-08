#include <stdio.h>
#include <stdlib.h>
#include "contagem_leituras.h"
#include <time.h>

int main (void) {
    clock_t t;
    FILE *f1, *f2, *f3, *f_out, *arquivo_pos_fragmentos;
    f1 = fopen("genoma_grande.txt", "r");
    f2 = fopen("pos_genes_grande.csv", "r");
    f3 = fopen("fragmentos_medio.txt", "r");
    arquivo_pos_fragmentos = fopen("arquivo_pos_fragmentos.csv", "w");
    f_out = fopen("contagens.txt", "w");

    t = clock();
    contagemLeituras(f1, f2, f3, arquivo_pos_fragmentos, 10000, 3000, f_out);
    t = clock() - t; 

    fclose(f1);
    fclose(f2);
    fclose(f_out);
    fclose(arquivo_pos_fragmentos);

    printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
}