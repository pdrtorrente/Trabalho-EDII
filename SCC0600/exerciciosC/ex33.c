#include<stdio.h>

int main (void) {
    int num;
    scanf("%d", &num);

    unsigned int number1 = 1;
    unsigned int number2 = 1;
    if (num != 0) {
        printf("%u ", number1);
    }
    for (int i = 0; i < num - 1; i++) {
        if (num == 0) {
            break;
        }
        int armazenamento = number1;
        number1 = number2;
        number2 = armazenamento + number2;
        printf("%u ", number1);
    }
}