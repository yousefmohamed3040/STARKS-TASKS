#include <stdio.h>
#include <stdlib.h>
int passwordAdmin(int);
adminMode();
void user_type();
void menu();
int main()
{

    char mode[5];
    printf("enter \"admin\" for admin mode or enter user for \"user\" mode:");
    gets(mode);
    if(mode[0]=='a'&&mode[1]=='d'&&mode[2]=='m'&&mode[3]=='i'&&mode[4]=='n')
    {
        adminMode();
        menu();
        printf("thank you");
    }
    else if(mode[0]=='u'&&mode[1]=='s'&&mode[2]=='e'&&mode[3]=='r')
    {

        user_type();
        payway();
        printf("thank you");
    }
    else
    {
        return 0;
    }
    return 0;
}
