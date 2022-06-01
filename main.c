#include <stdio.h>
#include <stdlib.h>
#include "ordena_digitos.h"
#include "contagem_intersecoes.h"

int main (void){
    FILE *f1, *f2, *f_out;
    f1 = fopen("arq1.txt", "r");
    f2 = fopen("arq2.txt", "r");
    f_out = fopen("contagens.txt", "w");

    contagemIntersecoes(f1, f2, 3, 7, f_out);

    fclose(f1);
    fclose(f_out);
}