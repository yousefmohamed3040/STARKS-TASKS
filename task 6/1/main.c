#include <stdio.h>
typedef struct
{
    char name[20];
    int basic;
    int bouns;
    int deduction;

}data;
 data emp[3];
int main(void)
{
    for(int i=0;i<3;i++)
    {
        printf("Name:");
        scanf("%s",&emp[i].name);
        printf("basic:");
        scanf("%d",&emp[i].basic);
        printf("bouns:");
        scanf("%d",&emp[i].bouns);
        printf("deduction:");
        scanf("%d",&emp[i].deduction);
        printf("---------------------\n");
    }
    for(int i=0;i<3;i++)
    {
        printf("Name:%s\n",emp[i].name);
        printf("basic:%d\n",emp[i].basic);
        printf("bouns:%d\n",emp[i].bouns);
        printf("deduction:%d\n",emp[i].deduction);
        printf("---------------------\n");
    }
}
