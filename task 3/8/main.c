#include <stdio.h>
#include <stdlib.h>
float small(float n1,float n2,float n3)
{
    if(n1<=n2&&n1<=n3)
    {
        return n1;
    }
    else if(n2<=n1&&n2<=n3)
    {
        return n2;
    }
    else
    {
        return n3;
    }
}
int main()
{
    float x,y,z;
    scanf("%f%f%f",&x,&y,&z);
    printf("%f",small(x,y,z));
    return 0;
}
