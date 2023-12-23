#include <stdio.h>
#include <stdlib.h>
int sumdigits(int n)
{
    int x=0,sumDigits=0;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        sumDigits+=x;
    }
    return sumDigits;
}
int main()
{
    int n,a,b,sum=0;
    scanf("%d%d%d",&n,&a,&b);
    for(int i=1;i<=n;i++)
    {
        if(sumdigits(i)>=a&&sumdigits(i)<=b)
        {
            sum=sum+i;
        }

    }
    printf("%d",sum);
    return 0;
}
