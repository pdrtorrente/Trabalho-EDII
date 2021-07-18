#include <stdio.h>

int main (void) {
    int a; int b; int r;
    scanf("%d", &a);
    scanf("%d", &b);

    while (b != 0) {
       r = a % b;
       a = b;
       b = r;
    }

    printf("%d\n", a);

}