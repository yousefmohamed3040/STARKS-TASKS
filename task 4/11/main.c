#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i, j;

    printf("Input the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Input the second string: ");
    fgets(str2, sizeof(str2), stdin);


    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }


    for (j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }


    result[i + j] = '\0';

    printf("After concatenation the string is: %s\n", result);

    return 0;
}
