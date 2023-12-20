#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,A,B;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=10;i++)
    {
        A=a*pow(3,i);
        B=b*pow(2,i);
        if(A>B)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
