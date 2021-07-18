#include<stdio.h>

int main (void) {
    char string[100];
    fgets(string, 100, stdin);

    int i = 0;
    while (string[i]) {
        i++;
    }

    for (int j = i - 2; j >= 0; j--) {
        printf("%c ", string[j]);
    }
}