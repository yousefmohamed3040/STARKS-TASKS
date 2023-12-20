#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id,password,x=1,count=0;
    id=1002;
    password=1234;
    int userID,userPassword;
    printf("enter your ID:");
    scanf("%d",&userID);
    if(userID==id)
    {
        do
        {
            printf("enter your password:");
            scanf("%d",&userPassword);
            count++;
            if(userPassword==password)
            {
                printf("welcom");
                x=0;
            }
            else
            {
                printf("incorrect password\n");
            }

        }
        while(x==1&&count<3);
        if(count==3)
        {
            printf("No more tries");
        }
    }
    else
    {
        printf("You are not registered");
    }
    return 0;
}
