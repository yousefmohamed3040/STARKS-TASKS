#include <stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
        int n1,n2,max,min,sum;
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        max=n1;
        min=n2;
    }
    else
    {
        max=n2;
        min=n1;
    }
    if(n1>=0&&n2>=0)
    {
        for(int i=min;i<=max;i++)
           {
               printf("%d ",i);
               sum+=i;
           }
        printf("sum =%d\n",sum);
    }
    else
    {

    }
    }
    return 0;
}
