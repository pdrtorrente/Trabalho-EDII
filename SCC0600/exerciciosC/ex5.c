#include <stdio.h>

int main (void) {
    int ano; int res = 0;
    scanf("%d", &ano);

    if (ano > 0) {
        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
            res = 1;
        }
    } else {
        res = -1;
    }

    printf("%d\n", res);
}