#include <stdio.h>
#include <string.h>

int calculartotalestring (int arrpinos[], int arrtotal[], int arrstrikes[]) {
    char stringfinal[100] = "";
    int total = 0; int contadorpino = 0;
    for (int i = 0; i < 10; i++) {
        if (i != 9) {
            if (arrstrikes[i] == 2) {
                // STRIKE
                total += arrpinos[contadorpino + 1] + arrpinos[contadorpino + 2];
                strcat(stringfinal, "X _");
                contadorpino += 1;
            } else {
                char pino1 = arrpinos[contadorpino] + '0';
                char substring[4] = {pino1, ' ', '0', '\0'};
                if (arrstrikes[i] == 1) {
                    total += arrpinos[contadorpino + 2];
                    substring[2] = '/';
                } else {
                    substring[2] = arrpinos[contadorpino + 1] + '0';
                }
                strcat(stringfinal, substring);
                contadorpino += 2;
            }
            strcat(stringfinal, " | "); 
        } else {
            char substring[6] = {'0', ' ', '0', ' ', '0', '\0'};
            char numbers[3];
            for (int k = 0; k < 3; k++) {
                int iterador = contadorpino + k;
                if (arrpinos[iterador] == 10 && (arrpinos[iterador - 1] == 10 || k == 0 || k == 2)) {
                    numbers[k] = 'X';        
                } else if (arrpinos[iterador] + arrpinos[iterador - 1] == 10 && k != 0 && arrpinos[iterador - 1] != 10) {
                    numbers[k] = '/';                    
                } else {
                    numbers[k] = arrpinos[iterador] + '0';
                }
            }
            substring[0] = numbers[0];
            substring[2] = numbers[1];
            substring[4] = numbers[2];
            if (arrtotal[i] < 10) {
                substring[3] = '\0';
            }
            strcat(stringfinal, substring); 
        }
        total += arrtotal[i];
    }
    printf("%s\n", stringfinal);
    return total;
}

void geradorarraypinos (int arrsaida[]) {
    int cont = 0;
    for (int i = 0; i < 10; i++) {
        int limit = i == 9 ? 3 : 2;
        for (int k = 0; k < limit; k++) {
            int input;
            scanf("%d", &input);
            arrsaida[cont] = input;
            if ((arrsaida[cont] == 10 && i != 9) || (i == 9 && k == 1 && (arrsaida[cont - 1] + arrsaida[cont] != 10 && arrsaida[cont - 1] != 10))) {
                // STRIKE OU QUEBRAR O LAÇO QUANDO NA ÚLTIMA RODADA NAO TIVER STRIKE NEM SPARE
                cont++;
                break;
            }
            cont++;
        }
    }
    for (int i = 21; i >= cont; i--) {
        arrsaida[i] = 0;
    }
}

int main (void) {
    int pinos[22];
    geradorarraypinos(pinos);
    int pontosframe[10];
    
    int cont = 0;
    int arraystrikes[10];
    for (int i = 0; i < 10; i++) {
        arraystrikes[i] = 0;
        pontosframe[i] = 0;
        int limit = 2;
        if (i == 9 && (pinos[cont] == 10 || pinos[cont] + pinos[cont + 1] == 10)) {
            limit = 3;
        }
        for (int k = 0; k < limit; k++) {
            pontosframe[i] += pinos[cont];
            if (pinos[cont] == 10 && i != 9) {
                cont++;
                break;
            }
            cont++;
        }
        if (pontosframe[i] == 10) {
            if ((i == 0 && pinos[0] == 10) || (pinos[cont - 1] == 10 && i != 0 && (pinos[cont - 2] != 0 || arraystrikes[i-1] == 0))) {
                arraystrikes[i] = 2;
            } else if (pinos[cont - 2] + pinos[cont - 1] == 10) {
                arraystrikes[i] = 1;
            }
        }
    }
    int total = calculartotalestring(pinos, pontosframe, arraystrikes);
    printf("%d\n", total);
}