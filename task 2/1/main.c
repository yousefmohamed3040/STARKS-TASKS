#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,newProcess;

    do
    {
        printf("enter the two numbers:");
        scanf("%d %d",&num1,&num2);
        printf("the sum=%d\n",num1+num2);
        printf("enter 1 for new process or enter 0 to end the programe:");
        scanf("%d",&newProcess);
    }
    while(newProcess==1);
    return 0;
}
