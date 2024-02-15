#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,swich;;
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(array[j]>array[j+1])
            {
                swich=array[j+1];
                array[j+1]=array[j];
                array[j]=swich;
            }
        }
    }
    printf("the smallest number=%d\n",array[0]);
    printf("the biggest number=%d",array[size-1]);
    return 0;
}
