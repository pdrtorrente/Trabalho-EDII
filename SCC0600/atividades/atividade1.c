// GRUPO 19

#include <stdio.h>

int main (void) {
    int k; 
    scanf("%d", &k);
    float A;
    scanf("%f", &A);
    
    float mediaparcial = 0;
    float somaPi = 0;
    
    for (int i = 0; i < k; i++){
        float Pi;
        scanf("%f", &Pi);
        float Ni;
        scanf("%f", &Ni);

        mediaparcial += Pi / ( Ni + A );
        somaPi += Pi;
    }

    float fracao = mediaparcial / somaPi;
    float N = (1 / fracao) - A;

    printf("%.1f\n", N);
}