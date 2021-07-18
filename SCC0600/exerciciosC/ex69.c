#include<stdio.h>

int len(char str[]) {
    int i = 0;
    int len = 0;
    while (str[i]) {
        if (str[i] == ' ') {
            i++;
            continue;
        }
        len++;
        i++;
    }
    return len - 1;
}

int areAnagrams (char str1[], char str2[]) {
    int arr1[26]; int arr2[26];  
    if (len(str1) != len(str2)) {
        return 0;
    }
    const strlen = len(str1);
    const size = 'z' - 'a';
    for (int i = 0; i <= size; i++) {
        arr1[i] = 0; arr2[i] = 0;
        for (int j = 0; j < strlen; j++) {
            if (str1[j] == 'a' + i) {
                arr1[i]++;
            }
            if (str2[j] == 'a' + i) {
                arr2[i]++;
            }
        }
    }
    int res = 1;
    for (int i = 0; i <= size; i++) {
        if (arr1[i] != arr2[i]) {
            res = 0;
            break;
        }
    }
    return res;
}

int main(void) {
    char string[200];
    fgets(string, 200, stdin);
    char anagrama[200];
    fgets(anagrama, 200, stdin);
    printf("as strings lidas sao: %s e %s", string, anagrama);
    int resposta = areAnagrams(string, anagrama);

    printf("%d", resposta);
}