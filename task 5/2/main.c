#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,res=1;
   printf("enter a number: ");
   scanf("%d",&n);
   int *ptr=&n;
   while(*(ptr)!=1)
   {
       res*=*(ptr);
       --*(ptr);
   }
   printf("the res=%d",res);
   return 0;

}
