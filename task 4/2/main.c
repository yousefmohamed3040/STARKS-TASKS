#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int array[5][5];
    for(int i=0;i<5;i++)
    {
        printf("enter row(%d):",i+1);
        for(int j=0;j<5;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("Row total: ");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum+=array[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
    printf("\n");
    printf("Column total: ");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum+=array[j][i];
        }
        printf("%d ",sum);
        sum=0;
    }
    return 0;
}
