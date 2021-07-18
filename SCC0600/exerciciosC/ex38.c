#include<stdio.h>

int main (void) {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        int inp;
        scanf("%d", &inp);
        printf("%d ", inp);
    }
}