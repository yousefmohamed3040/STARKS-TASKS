void user_type()
{
    printf("enter \"subscriber\" for subscriber user or enter \"guest\" for guest user:");
    char usertype[10];
    gets(usertype);
    if(usertype[0]=='s'&&usertype[1]=='u'&&usertype[2]=='b'&&usertype[3]=='s'&&usertype[4]=='c'&&
            usertype[5]=='r'&&usertype[6]=='i'&&usertype[7]=='b'&&usertype[8]=='e'&&usertype[9]=='r')
    {
        char name[20];
        int password;
        printf("enter your name:");
        scanf("%s",name);
        printf("enter your password:");
        scanf("%d",&password);
        if(password==55555)
        {
            menu();
        }
        else
        {
            printf("INCORRECT NAME OR BASSWORD");
            return 0;
        }
    }
    else if(usertype[0]=='g'&&usertype[1]=='u'&&usertype[2]=='e'&&usertype[3]=='s'&&usertype[4]=='t')
    {
        menu();
    }
    else
    {
        return 0;
    }
}
