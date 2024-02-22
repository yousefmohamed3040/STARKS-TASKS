#include <stdio.h>
#include <stdlib.h>
int fun(int *n)
{
    return (*n)*(*n)*(*n);
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int *ptr=&n;
    printf("the cube of this number =%d",fun(&n));
    return 0;
}
