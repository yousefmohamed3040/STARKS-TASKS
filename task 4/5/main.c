#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int palindrome(int n)
{
    int x=n,newNumber=0;
    int count=-1;
    while(n!=0)
    {
    n/=10;
    count++;
    }
    count=pow(10,count);
    while(x!=0)
    {
    newNumber=newNumber+((x%10)*count);
    count/=10;
    x/=10;
    }
    return newNumber;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(palindrome(n)==n)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
