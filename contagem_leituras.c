#include <stdio.h>
#include "contagem_intersecoes.h"
#include "ctrlf.h"
#include "contagem_leituras.h"

void contagemLeituras (FILE *arquivo_genoma, FILE *arquivo_pos_genes, FILE *arquivo_fragmentos, int n_genes, int n_fragmentos, FILE *arquivo_saida) {
    FILE *arquivo_pos_fragmentos;
    // Abre arquivo com posição dos fragmentos no modo ESCRITA
    arquivo_pos_fragmentos = fopen("arquivo_pos_fragmentos.csv", "w");

    // Encontra os fragmentos e escreve no arquivo arquivo_pos_fragmentos.csv
    ctrlF(arquivo_genoma, arquivo_fragmentos, arquivo_pos_fragmentos);

    fclose(arquivo_pos_fragmentos);
    // Abre arquivo com posição dos fragmentos no modo LEITURA
    arquivo_pos_fragmentos = fopen("arquivo_pos_fragmentos.csv", "r");
    
    // Conta as intersecções
    contagemIntersecoes(arquivo_pos_genes, arquivo_pos_fragmentos, n_genes, n_fragmentos, arquivo_saida);

    fclose(arquivo_pos_fragmentos);
}