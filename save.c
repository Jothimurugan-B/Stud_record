#include"define.h"
void save(ST *ptr)
{
        ST *temp=ptr;
        FILE *fp=fopen("student.txt","w");
        while(temp)
        {
                fprintf(fp,"%d %s %f\n",temp->roll,temp->name,temp->percentage);
                temp=temp->next;
        }

}
