#include<stdio.h>

int main (void) {
    char string[100];
    fgets(string, 100, stdin);

    int i = 0;
    int vogais = 0;
    while (string[i]) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
            vogais++;
        }
        i++;
    }

    printf("%d", vogais);
}