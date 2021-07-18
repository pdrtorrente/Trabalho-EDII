#include <stdio.h>

int main (void) {
    int n1; double res = 0;
    scanf("%d", &n1);

    for (int i = 1; i <= n1; i++) {
        res += (1.0f / i);
    }

    printf("%.4f\n", res);
}