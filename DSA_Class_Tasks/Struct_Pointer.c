#include<stdio.h>
#include<stdlib.h>
struct Employee {
    int ID;
    char name[50];
    float salary;
};

void par_1(struct Employee e);
void par_2(struct Employee *e);

int main() {

    struct Employee *e;
    e = malloc(sizeof(struct Employee));
    if(e == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter Id of the employee : ");
    scanf("%d",&e->ID);

    printf("Enter name of emplyee : ");
    scanf("%49s",e->name);

    printf("Enter salary of employee : ");
    scanf("%f",&e->salary);
    
    par_1(*e);
    par_2(e);

    free(e);

    return 0;

}

void par_1(struct Employee e) {

    printf("Employee Id : %d\n",e.ID);

    printf("Emplyee name : %s\n",e.name);

    printf("Employee Salary : %.2f\n",e.salary);

}

