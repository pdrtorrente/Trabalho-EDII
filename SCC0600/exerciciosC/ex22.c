#include <stdio.h>

int main (void) {
    int num; int checker = 1; int ocorrencias = 0;
    scanf("%d", &num);

    while (checker >= 0) {
        int newnum;        
        scanf("%d", &newnum);
        if (newnum == num) {
            ocorrencias++;           
        }
        checker = newnum;
    }

    printf("%d\n", ocorrencias);
}