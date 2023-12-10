#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;
    printf("enter the two number:");
    scanf("%f%f",&n1,&n2);
    printf("the sum=%0.2f\n",n1+n2);
    printf("the sub=%0.2f\n",n1-n2);
    printf("the mul=%0.2f\n",n1*n2);
    printf("the div=%0.2f\n",n1/n2);
    return 0;
}
