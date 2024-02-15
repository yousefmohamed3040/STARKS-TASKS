#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,check=0;
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                check=1;
            }

        }
        if(check==0)
        {
            printf("%d",array[i]);
        }
        check=1;
    }
    return 0;
}
