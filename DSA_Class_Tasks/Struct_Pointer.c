#include<stdio.h>
#include<stdlib.h>
struct Employee {
    int ID;
    char name[50];
    float salary;
};

void par_1(struct Employee e);
void par_2(struct Employee *e);

