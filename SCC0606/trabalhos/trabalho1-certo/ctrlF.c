#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ctrlF.h"

#define TAMANHO_STRING_TRECHO 1024

int ctrlF (FILE *arquivo_texto, FILE *arquivo_trechos, FILE *arquivo_saida){
    // Caso algum arquivo seja inválido, retorna um erro
    if (arquivo_saida == NULL || arquivo_texto == NULL || arquivo_saida == NULL) {
        printf("[ERRO] Arquivo inválido");
        return -1;
    }

    // Pega o tamanho do arquivo e volta o indicador de posição para o início
    fseek(arquivo_texto, 0, SEEK_END);
    int tamanho = ftell(arquivo_texto);
    fseek(arquivo_texto, 0, SEEK_SET);

    // Alocação de uma string para armazenar o texto
    char *texto = malloc(sizeof(char) * (tamanho + 1));
    int n = 0;
    char c;
    
    // Copia o texto para a string alocada
    while((c = fgetc(arquivo_texto)) != EOF) {
        texto[n] = c;
        n++;
    }
    texto[n] = '\0';
    
    int i, j;
    char *trecho = malloc(sizeof(char) * TAMANHO_STRING_TRECHO);
    int s1 = strlen(texto) - 1;
    int s2;

    while(!feof(arquivo_trechos)) {
        fgets(trecho, TAMANHO_STRING_TRECHO, arquivo_trechos);
        i = 0;
        s2 = strlen(trecho) - 1;
        // Encontra as substrings e sua posição final e inicial
        while (i <= s1) {
            j = 0;
            while (j < s2 && texto[i + j] == trecho[j]) {
                j += 1;
            }
            if (j == s2) {
                // Imprime as posições no arquivo de saída
                fprintf(arquivo_saida, "%d,%d\n", i, j + i - 1);
                //break; REMOVIDO PARA CONTAR TODOS
            }   
            i += 1;
        }
    }

    free(texto);
    free(trecho);
	rewind(arquivo_saida);

    return 0;
}
