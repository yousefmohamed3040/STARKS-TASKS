#include <stdio.h>
#include <stdlib.h>
int sum(int *ptr1,int *ptr2)
{
    return *ptr1+*ptr2;
}
int product(int *ptr1,int *ptr2)
{
    return *ptr1*(*ptr2);
}
int sub(int *ptr1,int *ptr2)
{
    return *ptr1-*ptr2;
}

int main()
{
    int n1,n2;
    printf("enter 1st number: ");
    scanf("%d",&n1);
    printf("enter 2nd number: ");
    scanf("%d",&n2);
    int *ptr1=&n1;
    int *ptr2=&n2;
    printf("The sum=%d\n",sum(&n1,&n2));
    printf("The sub=%d\n",sub(&n1,&n2));
    printf("The product=%d\n",product(&n1,&n2));

    return 0;

}
