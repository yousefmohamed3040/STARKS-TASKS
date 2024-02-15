#include <stdio.h>
#include <stdlib.h>

int main()
{
    int swich;
    printf("enter ten values :");
    int array[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
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
    printf("the biggest number=%d",array[9]);
    return 0;
}
