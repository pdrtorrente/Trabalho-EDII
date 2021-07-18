#include <stdio.h>

int main (void) {
    int num; int prime = 1;
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        if ( num % i == 0 ) {
            prime = 0;
            break;
        }
    }

    if (num <= 1) {
        prime = 0;
    }

    printf("%d\n", prime);
}