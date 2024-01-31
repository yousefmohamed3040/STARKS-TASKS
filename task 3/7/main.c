#include <stdio.h>
#include <stdlib.h>
int gpa(int avg)
{
    if(avg>=90&&avg<=100)
    {
        return 4;
    }
    else if(avg>=80&&avg<90)
    {
        return 3;
    }
    else if(avg>=70&&avg<80)
    {
        return 2;
    }
    else if(avg>=60&&avg<70)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",gpa(n));
    return 0;
}
