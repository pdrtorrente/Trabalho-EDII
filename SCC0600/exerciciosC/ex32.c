#include<stdio.h>

int main (void) {
    int input;
    scanf("%d", &input);

    char res = 'N';
    int result = 0;
    int counter = 1;
    while (result <= input) {
        result = counter * (counter + 1) * (counter + 2);
        if (result == input) {
            res = 'S';
        }
        counter++;
    }

    printf("%c", res);
}