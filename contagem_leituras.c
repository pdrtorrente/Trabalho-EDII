#include <stdio.h>
#include "contagem_intersecoes.h"
#include "ctrlf.h"
#include "contagem_leituras.h"

void contagemLeituras (FILE *arquivo_genoma, FILE *arquivo_pos_genes, FILE *arquivo_fragmentos, FILE* arquivo_pos_fragmentos, int n_genes, int n_fragmentos, FILE *arquivo_saida) {
    ctrlF(arquivo_genoma, arquivo_fragmentos, arquivo_pos_fragmentos);
    contagemIntersecoes(arquivo_pos_genes, arquivo_pos_fragmentos, n_genes, n_fragmentos, arquivo_saida);
}