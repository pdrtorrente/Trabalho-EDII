#include <stdio.h>

int multiplicacao (int n1, int n2) {
    int res = 0;
    for (int i = 1; i <= n2; i ++) {
        res += n1;
    }
    return res;
}

int main (void) {
    int num1; int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    int res = multiplicacao(num1, num2);

    printf("%d\n", res);
}