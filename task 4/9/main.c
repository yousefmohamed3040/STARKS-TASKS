#include <stdio.h>

int main() {
    char str[100];
    char replace_char;
    int i;

    printf("Input a string: ");
    fgets(str, sizeof(str),stdin);

    printf("Input replace character: ");
    scanf("%c", &replace_char);


    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = replace_char;
        }
    }


    printf("After replacing the space with %c: ", replace_char);
    printf("%s\n", str);

    return 0;
}
