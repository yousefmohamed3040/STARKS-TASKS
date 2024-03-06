void payway()
{
    int payway;
    printf("1-cash\n2-card\n");
    printf("chose the payway:");
    scanf("%d",&payway);
    if(payway==1)
    {
        printf("put the money in the machine");
    }
    else if(payway==2)
    {
        int cardPassword;
        printf("enter the credit card in the machine then enter its password :");
        scanf("%d",&cardPassword);
        if(cardPassword==2255)
        {
            printf("the product value has been withdrawn from your account\n");
        }
        else
        {
            printf("incorrect password");
        }

    }
    else
    {
        return 0;
    }
}
