#include<stdio.h>

int main(void) {
    int input;
    scanf("%d", &input);
    char res = 'N';

    int somadedivisores = 0;
    for (int i = 1; i < input; i++) {
        if (input % i == 0) {
            somadedivisores += i;
        }
    }

    if (input == somadedivisores) {
        res = 'S';
    }

    printf("%c", res);
}