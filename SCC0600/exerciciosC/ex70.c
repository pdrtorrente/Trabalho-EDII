#include<stdio.h>

int main (void) {
    char string[200];
    fgets(string, 200, stdin);
    char stringfinal[200];

    int i = 0;
    while(string[i]) {
        char res;
        switch (string[i])
        {
        case 'A':
            res = 'T';
            break;
        case 'T':
            res = 'A';
            break;
        case 'C':
            res = 'G';
            break;
        case 'G':
            res = 'C';
            break;      
        }
        stringfinal[i] = res;
        i++;
    }
    stringfinal[i-1] = 0;
    printf("%s", string);
    printf("%s", stringfinal);
}