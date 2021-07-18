#include<stdio.h>

int main (void) {
    char string[100];
    fgets(string, 100, stdin);
    char inp;
    scanf("%c", &inp);

    int i = 0;
    int occ = 0;
    while (string[i]) {
        if (string[i] == inp) {
            occ++;
        }
        i++;
    }

    printf("%d", occ);
}