#include <stdio.h>
#include <stdlib.h>
void fun(int n)
{
    while(n!=0)
    {
        printf("%d",n%10);
        n/=10;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}
