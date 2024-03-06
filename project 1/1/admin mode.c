void adminMode()
{int id;
        printf("enter your ID:");
        scanf("%d",&id);
        if(passwordAdmin(id)==1)
        {
            menu();
        }
        else
        {
            printf("INCORRECT ID");
            return 0;
        }

}
