#include <stdio.h>
#include <stdlib.h>
#include "contagem_leituras.h"
#include <time.h>
#include <string.h>
#define NUM_ENTRADAS 10

// Função pow() do <math.h>
int powInt (int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

// Transforma as letras do input em numeros inteiros:
//  0 - pequeno; 1 - medio; 2 - grande
int transformarInput (char *inp) {
    int i = 0, res = 0, len = strlen(inp) - 1;
    while (inp[i] != '\0') {
        int valor = 0;
        switch(inp[i]) {
            case 'P':
                valor = 0;
            break;
            case 'M':
                valor = 1;
            break;
            case 'G':
                valor = 2;
            break;          
        }
        res += valor*powInt(10,len-i);
        i++;
    }
    return res;
}

int main (void) {
    int ARQS[NUM_ENTRADAS];
    clock_t t;
    FILE *arq_genoma, *arq_fragmentos, *arq_pos_genes, *f_out, *arq_pos_fragmentos;

    printf("======= CONTAGEM_LEITURAS.C =======\n");
    printf("-> As combinacoes de arquivos a serem lidos sao pedidos na ordem:\n");
    printf("\t- Genoma\n");
    printf("\t- Posicao dos genes\n");
    printf("\t- Fragmentos de genes\n");
    printf("-> O formato de insercao das entradas e:\n");
    printf("\t- P (pequeno)\n");
    printf("\t- M (medio)\n");
    printf("\t- G (grande)\n\n");
    printf(">> Insira as combinacoes de arquivo desejadas (uma em cada linha e sem espacos, maximo de %d):\n", NUM_ENTRADAS);
    printf(">> Quando nao quiser mais inserir, digite FIM\n");

    int ARQS_N = 0;
    for (int i = 0; i < NUM_ENTRADAS; i++) {
        char input[4];
        scanf("%s", input);
        if (!strcmp("FIM", input)) {
            break;
        }
        ARQS[i] = transformarInput(input);
        ARQS_N++;
    }


    // Roda o programa para todas as combinações de arquivos inputadas
    for (int n = 0; n < ARQS_N; n++) {
        // Pega quais arquivos foram selecionados pelo usuário através da divisao inteira
        unsigned int i = ARQS[n] / 100, j = (ARQS[n] - 100*i)/10, k = (ARQS[n] - j*10 - i*100);
        char TAMANHOS[3][32] = {"pequeno", "medio", "grande"};
        char ARQUIVOS[3][64] = {"genoma_", "pos_genes_", "fragmentos_"};    
        char nome1[100], nome2[100], nome3[100]; 
        sprintf(nome1, "%s%s.txt", ARQUIVOS[0], TAMANHOS[i]);
        sprintf(nome2, "%s%s.csv", ARQUIVOS[1], TAMANHOS[j]);
        sprintf(nome3, "%s%s.txt", ARQUIVOS[2], TAMANHOS[k]);

        // Abre os arquivos necessários
        arq_genoma = fopen(nome1, "r");
        arq_pos_genes = fopen(nome2, "r");
        arq_fragmentos = fopen(nome3, "r");
        arq_pos_fragmentos = fopen("arquivo_pos_fragmentos.csv", "w+");

        // Cria o nome do arquivo de saida
        char nome_f_out[150];
        sprintf(nome_f_out, "./contagens/GEN_%s__POS_GEN_%s__FRAG_%s.txt", TAMANHOS[i], TAMANHOS[j], TAMANHOS[k]);
        f_out = fopen(nome_f_out, "w");

        printf("-> Lendo arquivos de dados: %s, %s e %s\n", nome1, nome2, nome3);

        // Inicialização do clock() e medição do tempo para a função contagemLeituras()
        t = clock();
        contagemLeituras(arq_genoma, arq_pos_genes, arq_fragmentos, arq_pos_fragmentos, f_out);
        t = clock() - t;

        printf("Tempo de execucao: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000)));

        fclose(arq_genoma);
        fclose(arq_pos_genes);
        fclose(arq_fragmentos);
        fclose(arq_pos_fragmentos);
        fclose(f_out);
    }

    printf("======= OPERACAO FINALIZADA COM SUCESSO =======\n");
}
