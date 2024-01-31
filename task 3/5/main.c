#include <stdio.h>
#include <stdlib.h>
int prime(int n)
{
    if(n==2)
    {
        return 1;
    }
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(prime(n)==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
