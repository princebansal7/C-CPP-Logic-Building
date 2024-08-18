#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    double salary;
    char name[20];
};

void input(struct Employee* e)
{
    printf("Enter Id, Salary & Name of Employee:\n");
    scanf("%d", &e->id);
    scanf("%lf", &e->salary);

    fflush(stdin); // cleaning input buffer

    fgets(e->name, 20, stdin);
}

struct Employee getMaxSalaryEmp(struct Employee* e, int n)
{
    double maxSal = -1;
    int maxSalaryEmpIndex;
    /*
      NOTE: why we are doing e[I].salary instead of doing e[I]->salary ?
            as e is a structure pointer shouldn't we use -> notation ?

      ChatGPT ans:
        In this case, we are using . notation instead of -> notation because e is
        an array of Employee structures, not an array of pointers to Employee structures.

        When we declare a pointer to a struct, we use -> to access the members of the struct
        because the pointer itself doesn't contain the members. However, when we declare an
        array of structs, the array elements contain the members, so we use . to access them.

        So, in this code, e[i] is an Employee structure, not a pointer to an Employee structure,
        and we can access the salary member using the . notation.

    */
    for (int i = 0; i < n; i++)
        if (e[i].salary > maxSal) {
            maxSalaryEmpIndex = i;
            maxSal = e[i].salary;
        }

    return e[maxSalaryEmpIndex];
}

void display(struct Employee e)
{
    printf("Id = %d\nSalary = %.2f\nName = %s\n", e.id, e.salary, e.name);
}

int main()
{
    struct Employee emp[10];

    int n;
    printf("Enter number of Employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter Employee%d details:\n", i + 1);
        input(&emp[i]);
    }

    struct Employee maxSalaryEmp = getMaxSalaryEmp(emp, n);
    printf("Employee details having maximum salary is:\n");
    display(maxSalaryEmp);

    printf("\n");
    return 0;
}