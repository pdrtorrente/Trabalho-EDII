#include<stdio.h>

int len(char str[]) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i - 1;
}

int main(void) {
    char string[200];
    fgets(string, 200, stdin);
    int strlen = len(string);
    int lastindex = strlen - 1;
    int res = 1;
    int i = 0; int ilast = lastindex;
    while(i < strlen / 2) {
        if (string[i] == ' ') {
            i++;
            continue;
        }
        if (string[ilast] == ' ') {
            ilast--;
            continue;
        }
        if (string[i] != string[ilast]) {
            res = 0;
            break;
        }
        i++;
        ilast--;
    }

    printf("%d", res);
}