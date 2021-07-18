#include<stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    int arrinput[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &arrinput[i]);
    }

    int res = 0;
    int counterpos = 0;
    int counterneg = 0;
    for (int i = 0; i < num - 1; i++) {
        if (arrinput[i] <= arrinput[i + 1]) {
            counterpos++;
        }
        if (arrinput[i] >= arrinput[i + 1]) {
            counterneg++;
        }
    }
    if (counterpos == num - 1) {
        res = 1;
    } else if (counterneg == num - 1) {
        res = -1;
    }

    printf("%d", res);
}