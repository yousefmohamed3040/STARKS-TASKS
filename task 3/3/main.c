#include <stdio.h>
#include <stdlib.h>
void fun(int n)
{
    int count=0,i=0;
    int x=n;
   while(n!=0)
   {
       n/=2;
       count++;
   }
   int array[count];
   while(x!=0)
   {
       array[i]=x%2;
       x/=2;
       i++;
   }
   for(int i=count-1;i>=0;i--)
   {
       printf("%d",array[i]);
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}
