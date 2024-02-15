#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sumEven=0;
    int productOdd=1;
    int array[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(array[i]%2==0)
        {
            sumEven+=array[i];
        }
        else
        {
            productOdd*=array[i];
        }
    }
    printf("the sum of even number=%d\n",sumEven);
    printf("the product of odd number=%d",productOdd);
    return 0;
}
