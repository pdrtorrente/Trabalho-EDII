#include <stdio.h>

int main (void) {
    int num; 
    scanf("%d", &num);
    
    int maior = 0;
    scanf("%d", &maior);

    for (int i = 0; i < num - 1; i++) {
        int newnum;
        scanf("%d", &newnum);

        if (newnum > maior) {
            maior = newnum;
        }
    }

    printf("%d\n", maior);
}