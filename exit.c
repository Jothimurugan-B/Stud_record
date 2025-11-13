#include"define.h"
void exit1(ST *ptr)
{
        char op;
        label:
        printf(" ____________________________________________\n");
        printf("|                                            |\n");
        printf("| S/s : Save and Exit                        |\n");
        printf("| E/e : Exit without saving                  |\n");
        printf("|____________________________________________|\n");
                scanf(" %c",&op);
                switch(op)
                {
                        case 'S':
                        case 's': printf("Saved ");save(ptr);
                        case 'E':
                        case 'e': printf("\nExitted\n"); break;
                        default : printf("Option Mismatched\n"); goto label;
                }

}
