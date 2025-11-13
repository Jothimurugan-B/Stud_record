// Main function for delete all the records


#include"define.h"
void delete_all(ST **ptr)
{
        if(!*ptr)
        {
                printf("No Records available to delete\n");
                return;
        }
        ST *temp;
        while(*ptr)
        {
                temp=*ptr;
                *ptr=temp->next;
                free(temp);
        }
        printf("All Records Deleted successfully\n");

}
