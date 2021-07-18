#include <stdio.h>

int main(void) {
    int quantity; 
    scanf("%d", &quantity);
    int vec[quantity];

    for (int i = 0; i < quantity; i++) {
        int num;
        scanf("%d", &num);
        vec[i] = num;
    }

    int maior1 = vec[0]; int maior2 = vec[1];
    for (int i = 0; i < quantity; i++) {
        if (vec[i] > maior1) {
            maior1 = vec[i];
        }
    }
    
    printf("%d\n", maior1);
    printf("%d\n", maior2);
}