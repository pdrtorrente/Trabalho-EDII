#include <stdio.h>

int fatorial (int n) {
    long long fat = 1;
    for (int i = n; i >= 1; i--) {
        fat *= i;
    }
    return fat;
}

int main (void) {
    int num;
    scanf("%d", &num);

    long long res = fatorial(num);

    printf("%lld\n", res);
}