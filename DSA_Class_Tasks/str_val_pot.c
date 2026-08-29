#include<stdio.h>
#include<stdlib.h>
struct Employee {
    int ID;
    float Salary;
    int perf[3];
    int *point;
};
void par_1(struct Employee e);
void par_2(struct Employee *e) ;

int main() {

    struct Employee e;
    e.point = (int *)malloc(2*sizeof(int));
    if(e.point == NULL) {
        printf("Memory not ellocate\n");
        return 1;
    }

    printf("Enter Id of the employee : ");
    scanf("%d",&e.ID);

    printf("Enter salary of employee : ");
    scanf("%f",&e.Salary);

    printf("Give 3 rating on performance by filling no of stars\n");
    for(int i=0;i<3;i++) {
        scanf("%d",&e.perf[i]);
    }

    printf("Fill more 2 points\n");
    for(int i=0;i<2;i++) {
        scanf("%d",&e.point[i]);
    }

    par_1(e);
    par_2(&e);

    free(e.point);
    return 0;

}

void par_1(struct Employee e) {

    printf("Employee Id : %d\n",e.ID);

    printf("Employee Salary : %.2f\n",e.Salary);

    for(int i=0;i<3;i++) {
        printf("%d\n",e.perf[i]);
    }

    for(int i=0;i<2;i++) {
        printf("%d\n",e.point[i]);
    }
}

