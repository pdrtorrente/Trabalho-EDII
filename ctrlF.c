#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ctrlf.h"

int ctrlF (FILE *arquivo_trechos, FILE *arquivo_texto, FILE *arquivo_saida){
    
    char texto[1000];
    char c;
    
    if (arquivo_saida == NULL || arquivo_texto == NULL || arquivo_saida == NULL) {
        printf("erro");
        return -1;
    }

    int n = 0;
    
    do {
        c = fgetc(arquivo_texto);
        texto[n] = c;
        n++;
    } while(!feof(arquivo_texto));

    
    
    int i, j;
    char trecho[512];
    int n1 = strlen(texto);
    int n2;

    while(!feof(arquivo_trechos)) {
        fgets(trecho, 512, arquivo_trechos);
        i = 0;
        n2 = strlen(trecho);

        while (i <= n1) {
            
            j = 0;

            while (j <= n2 && texto[i + j] == trecho[j]) {
                j += 1;
            }

            if (j == n2) {
                fprintf(arquivo_saida, "%i,%i\n", i, j + i - 1);
                break
            }
            
        i += 1;
        }

    }
    
    return 0;
}