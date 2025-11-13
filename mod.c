// main function for modify the records


#include"define.h"
void mod(ST **rec)
{
                char op;
	label:
        printf(" _______________________________________________________\n");
        printf("|                                                       |\n");
        printf("| Enter which record to search for modification         |\n");
        printf("| R/r : To Search a Roll No.                            |\n");
        printf("| N/n : To Search a Name                                |\n");
        printf("| P/p : To Search a Percentage Based                    |\n");
        printf("|                                                       |\n");
        printf("|_______________________________________________________|\n");
                scanf(" %c",&op);
                switch(op)
                {
                        case 'R':
                        case 'r': mod_roll(rec); break;
                        case 'N':
                        case 'n': mod_name(rec); break;
                        case 'P':
                        case 'p': mod_per(rec); break;
                        default: printf("Option mismatch.\n"); goto label;
                }
}


// sub function for modify using roll number

void mod_roll(ST **ptr)
{

        ST *temp=*ptr;
        int roll;
        char op;
        printf("Enter the Roll number\n");
        scanf("%d",&roll);
        while(temp)
        {
                if(temp->roll==roll)
                {
                        label:
                                printf("Enter the option to change 1.Name 2.Percentage\n");
                                scanf(" %c",&op);
                                switch(op)
                                {
                                        case '1':
                                                printf("Enter the New record Name\n");
                                                scanf("%s",temp->name);
                                                break;
                                        case '2':
                                                printf("Enter the New record Percentage\n");
                                                scanf("%f",&temp->percentage);
                                                break;
                                        default:
                                                printf("Invalid option\n");
                                                goto label;
                                }
                }
                temp=temp->next;
        }
        printf("Entered Roll Number Mismatched\n");
        return;
}


//sub function for modify using name

void mod_name(ST **ptr)
{
        ST *temp=*ptr;
        ST *prev=NULL;
        int count=0;
        int flag=1;
        char name[20];
        printf("Enter the Name\n");
        scanf("%s",name);
        while(temp)
        {
                if(strcmp(temp->name,name)==0)
                {
                        count++;
                        if(count==1)
                                prev=temp;
                        if(count>1)
                        {
                                if(flag==1)
                                {
                                        show(prev);
                                        flag=0;
                                }
                                show(temp);
                        }
                }
                temp=temp->next;
        }
        if(count==1)
        {
                char op;
                label:
                                               printf("Enter the option to change 1.Name 2.Percentage\n");
                        scanf(" %c",&op);
                        switch(op)
                        {
                                case '1':
                                        printf("Enter the New record Name\n");
                                        scanf("%s",prev->name);
                                        break;
                                case '2':
                                        printf("Enter the New record Percentage\n");
                                        scanf("%f",&prev->percentage);
                                        break;
                                default:
                                        printf("Invalid option\n");
                                        goto label;
                        }
        }
        else if(count>1)
                mod_roll(ptr);
        else
        {
                printf("Record Mismatch for the given name\n");
        }
}


// sub function for modify using percentage

void mod_per(ST **ptr)
{
        ST *temp=*ptr;
        ST *prev=NULL;
        int count=0;
        char op;
        int flag=1;
        float per;
        printf("Enter the Percentage\n");
        scanf("%f",&per);
        while(temp)
        {
                if(temp->percentage==per)
                {
                        count++;
                        if(count==1)
                                prev=temp;
                        if(count>1)
                        {
                                if(flag==1)
                                {
                                        show(prev);
                                        flag=0;
                                }
                                show(temp);
                        }
                }
                temp=temp->next;
        }
        if(count==1)
        {
                label:
                        printf("Enter the option to change 1.Name 2.Percentage\n");
                        scanf(" %c",&op);
                        switch(op)
                        {
                                case '1':
                                        printf("Enter the New record Name\n");
                                        scanf("%s",prev->name);
                                        break;
                                case '2':
                                        printf("Enter the New record Percentage\n");
                                        scanf("%f",&prev->percentage);
                                        break;
                                default:
                                        printf("Invalid option\n");
                                        goto label;
                        }
        }
        else if(count>1)
                mod_roll(ptr);
        else
        {
                printf("Record Mismatch for the given Percenitage\n");
        }

}
