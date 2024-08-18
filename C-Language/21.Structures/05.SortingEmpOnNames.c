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

void sortEmpOnNames(struct Employee e[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (strcmp(e[j].name, e[j + 1].name) > 0) {
                struct Employee temp;
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
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

    sortEmpOnNames(emp, n);

    printf("\n\nAfter sorting based on their names:\n");
    for (int i = 0; i < n; i++)
        display(emp[i]);

    printf("\n");
    return 0;
}