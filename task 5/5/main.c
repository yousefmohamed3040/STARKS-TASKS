#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[8];
    printf("enter 8 element: ");
    for(int i=0;i<8;i++)
    {
        scanf("%d",&array[i]);
    }
    int *ptr=array;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                int temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<8;i++)
    {
        printf("%d\n",*(ptr));
        ++ptr;
    }
    return 0;

}
