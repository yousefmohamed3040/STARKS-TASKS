#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pass=0,faild=0,max,min,avg,swich;
    float sum=0;
    int class1[10]={60,70,65,48,91,95,65,48,65,40};
    int class2[10]={95,84,72,61,18,65,42,82,32,65};
    int class3[10]={25,84,54,21,75,99,88,62,32,46};
    for(int i=0;i<10;i++)
    {
        if(class1[i]>=50)
        {
            pass++;
        }
        else
        {
            faild++;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(class2[i]>=50)
        {
            pass++;
        }
        else
        {
            faild++;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(class3[i]>=50)
        {
            pass++;
        }
        else
        {
            faild++;
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(class1[j]>class1[j+1])
            {
                swich=class1[j+1];
                class1[j+1]=class1[j];
                class1[j]=swich;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(class2[j]>class2[j+1])
            {
                swich=class2[j+1];
                class2[j+1]=class2[j];
                class2[j]=swich;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(class3[j]>class3[j+1])
            {
                swich=class3[j+1];
                class3[j+1]=class3[j];
                class3[j]=swich;
            }
        }
    }
    if(class1[0]<=class2[0]&&class1[0]<=class3[0])
    {
        min=class1[0];
    }
    else if(class2[0]<=class1[0]&&class2[0]<=class3[0])
    {
        min=class2[0];
    }
    else if(class3[0]<=class2[0]&&class3[0]<=class1[0])
    {
        min=class3[0];
    }
    if(class1[9]>=class2[9]&&class1[9]>=class3[9])
    {
        min=class1[9];
    }
    else if(class2[9]>=class1[9]&&class2[9]>=class3[9])
    {
        max=class2[9];
    }
    else if(class3[9]>=class2[9]&&class3[9]>=class1[9])
    {
        max=class3[9];
    }
    for(int i=0;i<10;i++)
    {
        sum+=class1[i];
    }
    for(int i=0;i<10;i++)
    {
        sum+=class2[i];
    }
    for(int i=0;i<10;i++)
    {
        sum+=class2[i];
    }
    avg=sum/30;
    printf("the number of passed student = %d\n",pass);
    printf("the number of failed student = %d\n",faild);
    printf("the max deg = %d\n",max);
    printf("the min deg = %d\n",min);
    printf("the avg = %d\n",avg);
    return 0;
}
