#include <stdio.h>
#include <stdlib.h>
void factores(int n)
{
    int sumFactores=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sumFactores+=i;
        }
        else
        {

        }
    }
    if(sumFactores==n)
    {
        printf("It's perfect number");
    }
    else
    {
        printf("It's not perfect number");
    }
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    factores(n);
    return 0;
}
