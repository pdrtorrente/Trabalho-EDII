#include <stdio.h>

int main (void) {
    int n1; int n2; int res = 0;
    scanf("%d", &n1);
    scanf("%d", &n2); 

    for (int i = n1; i <= n2; i++) {
        res += i;
    }

    printf("%.4f\n", res);
}