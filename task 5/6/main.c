#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("enter the index of array: ");
    scanf("%d",&size);
    int array[size];
    printf("enter the element: ");
    int *ptr=array;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=size-1;i>=0;i--)
    {
        printf("%d\n",*(ptr+i));
    }
    return 0;

}
