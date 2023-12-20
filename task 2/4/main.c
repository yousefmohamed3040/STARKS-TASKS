#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v,a,b,c,x;
    int count=0;
    scanf("%d%d%d%d",&v,&a,&b,&c);
    x=v;
    while(v>=0)
    {
        v=v-(a+b+c);
        count++;
    }
    count--;
    int lastcase=x-count*(a+b+c);
    if(lastcase-a<0)
    {
        printf("F");
    }
    else if(lastcase-a-b<0)
    {
        printf("M");
    }
    else
    {
        printf("T");
    }

    return 0;
}
