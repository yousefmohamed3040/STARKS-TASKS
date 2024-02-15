#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digitsNumber;
    scanf("%d",&digitsNumber);
    int array[digitsNumber];
    for(int i=0;i<digitsNumber;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<digitsNumber;i++)
    {
        for(int j=i+1;j<digitsNumber;j++)
        {
            if(array[i]==array[j])
            {
                printf("yes");
                break;
            }
        }
    }
    return 0;
}
