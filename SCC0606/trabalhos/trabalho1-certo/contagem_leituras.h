#ifndef __CONTAGEM_LEITURAS_H__
#define __CONTAGEM_LEITURAS_H__

#include "contagem_intersecoes.h"
#include "ctrlF.h"
#include <stdio.h>
#include <stdlib.h>

void contagemLeituras (FILE *arquivo_genoma, FILE *arquivo_pos_genes, FILE *arquivo_fragmentos, FILE *arquivo_pos_fragmentos, FILE *arquivo_saida);
int contarLinhas (FILE *arq);

#endif
