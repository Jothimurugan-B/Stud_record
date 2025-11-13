#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// structure typedef for student records

typedef struct st
{
        int roll;
        char name[20];
        float percentage;
        struct st *next;
}ST;


// main functions definition

void add(ST **);
void del(ST **);
void show(ST *);
void stud_show(ST *);
void mod(ST **);
void save(ST *);
void exit1(ST *);
void sort(ST *);
void delete_all(ST **);
void rev_list(ST *);


// Sub functions definition

void show(ST *);
void delete_roll(ST **);
void delete_name(ST **);
void mod_per(ST **);
void mod_roll(ST **);
void mod_name(ST **);
int node_count(ST *);
                       

                           
