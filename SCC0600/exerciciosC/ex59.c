#include<stdio.h>

int main (void) {
    char string[100];
    fgets(string, 100, stdin);

    int i = 0;
    while (string[i] != 0)
    {
        if (string[i + 1] != 0) {
            printf("%c ", string[i]);
        } else {
            printf("%c", string[i]);
        }
        i++;
    }
}