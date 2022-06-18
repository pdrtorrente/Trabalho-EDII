#include <stdio.h>
#include "contagem_intersecoes.h"
#include "ctrlF.h"
#include "contagem_leituras.h"

void contagemLeituras (FILE *arquivo_genoma, FILE *arquivo_pos_genes, FILE *arquivo_fragmentos, FILE *arquivo_pos_fragmentos, FILE *arquivo_saida) {
    // Encontra os fragmentos e escreve no arquivo arquivo_pos_fragmentos.csv
    ctrlF(arquivo_genoma, arquivo_fragmentos, arquivo_pos_fragmentos);
    
    int n_genes = contarLinhas(arquivo_pos_genes);
    int n_fragmentos = contarLinhas(arquivo_pos_fragmentos);

    // Conta as intersecções
    contagemIntersecoes(arquivo_pos_genes, arquivo_pos_fragmentos, n_genes, n_fragmentos, arquivo_saida);
}

int contarLinhas (FILE *arq) {
    rewind(arq);
    char c;
    int linhas = 0;
    while ((c = fgetc(arq)) != EOF) {
        if (c == '\n') {
            linhas++;
        }
    }
	rewind(arq);
    printf("[%d linhas]\n", linhas);
    return linhas;
}
