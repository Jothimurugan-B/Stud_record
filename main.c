#include"define.h"
int main()
{
        char op;
        ST *hptr=0;
        while(1)
        {
                label:
                        	printf(" ___________________________________________\n");
       			 	printf("|                                           |\n");
       			 	printf("|  ********* STUDENT RECORD MENU *********  |\n");
        			printf("|___________________________________________|\n");
        			printf("|                                           |\n");
       				printf("|   a/A : add new record                    |\n");
        			printf("|   d/D : delete a record                   |\n");
        			printf("|   s/S : show the list                     |\n");
        			printf("|   m/M : modify a record                   |\n");
        			printf("|   v/V : save                              |\n");
        			printf("|   e/E : exit                              |\n");
        			printf("|   t/T : sort the list                     |\n");
        			printf("|   l/L : delete all records                |\n");
      	  			printf("|   r/R : reverse the list                  |\n");
        			printf("|                                           |\n");
        			printf("|   Enter your choice:                      |\n");
        			printf("|___________________________________________|\n");
                        scanf(" %c",&op);
                        switch(op)
                        {
                                case 'a': add(&hptr);break;
                                case 'A': add(&hptr); break;

                                case 'd': del(&hptr);break;
                                case 'D': del(&hptr); break;

                                case 's': stud_show(hptr);break;
                                case 'S': stud_show(hptr); break;

                                case 'm': mod(&hptr);break; 
                                case 'M': mod(&hptr); break;

                                case 'v': save(hptr);break;
                                case 'V': save(hptr); break;

                                case 'e': exit1(hptr);return 0;break;
                                case 'E': exit1(hptr); return 0; break;

                                case 't': sort(hptr);break;
                                case 'T': sort(hptr); break;

                                case 'l': delete_all(&hptr);break;
                                case 'L': delete_all(&hptr); break;

                                case 'r': rev_list(hptr);break;
                                case 'R': rev_list(hptr); break;

                                default: printf("Invalid Option!\n");		
			        goto label;
                       }
        }
}
    
