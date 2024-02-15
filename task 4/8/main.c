#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    printf("Input the string: \n");
    fgets(str, sizeof(str),stdin);


    printf("Input the character to find frequency: \n");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("The frequency of '%c' is %d\n", ch, count);

    return 0;
}
