#include<stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} data;

void retornarErro () {
    printf("DATA INVALIDA");
    return;
}

int main(void) {
    char stringinp[15];
    fgets(stringinp, 15, stdin);
    int i = 0;
    int tipo = 0;
    char dia_str[3];
    char mes_str[15];
    char ano_str[5];
    while (stringinp[i]) {
        if (stringinp[i] == '/') {
            tipo++;
            i++;
            continue;
        }
        if (tipo == 0) {
            //DIA
            int dia_int = (stringinp[i] - '0') * 10 + stringinp[i + 1] - '0';
            i++;
        } else if (tipo == 1) {
            //MES
            int mes_int = (stringinp[i] - '0') * 10 + stringinp[i + 1] - '0';
            if (mes_int < 1 || mes_int > 12) {
                retornarErro();
                return -1;
            }
            i++;
        } else if (tipo == 2) {
            //ANO
            int counter = 0;
            for (int j = i; j < i + 3; j++) {
                ano_str[counter] = stringinp[j];
            }
            ano_str[counter] = 0;
            i += 3;
            printf(ano_str);
        }
        i++;
    }
    //printf("%s de %s de %s", dia_str, mes_str, ano_str);
} 