#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c,nextchar,previouschar;
    printf("enter a char value:");
    scanf("%c",&c);
    printf("the char is %c\n",c);
    printf("the equivalent ascii of char is %d\n",c);
    nextchar=c+1;
    previouschar=c-1;
    printf("the next char is %c\n",nextchar);
    printf("the previous char is %c\n",previouschar);
    return 0;
}
