#include<stdio.h>

int main (void) {
    int vec[7];
    int soma = 0;
    for (int i = 0; i < 7; i++) {
        scanf("%d", &vec[i]);
        soma += vec[i];
    }
    float media = soma/7;
    int counter = 0;
    for (int i = 0; i < 7; i++) {
        if (vec[i] > media) {
            counter++;
        }
    }
    printf("%d", counter);
}