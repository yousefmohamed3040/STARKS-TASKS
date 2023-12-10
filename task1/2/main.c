#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,x;
    printf("enter number1:");
    scanf("%d",&n1);
    printf("enter number2:");
    scanf("%d",&n2);
    printf("the numbers before swaping are %d %d\n",n1,n2);
    x=n1;
    n1=n2;
    n2=x;
    printf("the numbers after swaping are %d %d",n1,n2);
    return 0;
}
