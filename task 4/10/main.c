#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, flag = 0;

    printf("Input the 1st string: ");
    scanf("%s", str1);

    printf("Input the 2nd string: ");
    scanf("%s", str2);

    printf("String1: %s\n", str1);
    printf("String2: %s\n", str2);

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }

    if (str1[i] == '\0' && str2[i] == '\0' && flag == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
