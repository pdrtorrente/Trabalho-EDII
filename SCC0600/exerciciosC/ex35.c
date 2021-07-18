#include<stdio.h>

int main (void) {
    int num;
    scanf("%d", &num);
    int arraynum[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &arraynum[i]);
    }

    int max = 0;
    for (int i = 0; i < num; i++) {
        int counter = 1;
        for (int k = i; k < num - i; k++) {
            if (arraynum[k] <= arraynum[k + 1]) {
                counter++;
                printf("%d e maior que %d [%d - %d],", arraynum[k], arraynum[k + 1], i, k);
            } else {
                break;
            }
        }
        if (counter > max) {
            max = counter;
        }
    }

    printf("%d", max);
}