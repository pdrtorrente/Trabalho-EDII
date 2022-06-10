#include <stdio.h>
#include <stdlib.h>
#include "contagem_leituras.h"
#include <time.h>
#include <string.h>
#include <math.h>

int main (void) {
    clock_t t;
    FILE *f1, *f2, *f3, *f_out;

    // Roda o programa para todas as combinações de arquivos
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                char TAMANHOS[3][32] = {"pequeno", "medio", "grande"};
                char ARQUIVOS[3][64] = {"genoma_", "pos_genes_", "fragmentos_"};

                char nome1[50], nome2[50], nome3[50]; 
                sprintf(nome1, "%s%s.txt", ARQUIVOS[0], TAMANHOS[i]);
                sprintf(nome2, "%s%s.csv", ARQUIVOS[1], TAMANHOS[j]);
                sprintf(nome3, "%s%s.txt", ARQUIVOS[2], TAMANHOS[k]);

                f1 = fopen(nome1, "r");
                f2 = fopen(nome2, "r");
                f3 = fopen(nome3, "r");

                char nome_f_out[50];
                sprintf(nome_f_out, "./contagens/GEN_%s__POS_GEN_%s__FRAG_%s.txt", TAMANHOS[i], TAMANHOS[j], TAMANHOS[k]);
                f_out = fopen(nome_f_out, "w");

                printf("[%d.%d.%d] Fazendo o arquivo com %s, %s e %s\n", i+1, j+1, k+1, nome1, nome2, nome3);

                // Inicialização do clock() e medição do tempo para a função contagemLeituras()
                t = clock();
                contagemLeituras(f1, f2, f3, 100*pow(10, j), 300*pow(10, k), f_out);
                t = clock() - t;

                printf("Tempo de execucao: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000)));

                fclose(f1);
                fclose(f2);
                fclose(f3);
                fclose(f_out);
            }
        }
    }

    printf("===== OPERACAO FINALIZADA COM SUCESSO =====\n");
}