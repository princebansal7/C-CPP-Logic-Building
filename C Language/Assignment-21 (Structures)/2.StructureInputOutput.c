#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    double salary;
    char name[20]; // name is constant pointer => can't point to another location now => have to use strcpy() to put values
};

// WAY-1
struct Employee input1()
{
    struct Employee e;
    printf("Enter Id, Salary & Name of Employee:\n");
    scanf("%d", &e.id);
    scanf("%lf", &e.salary);

    fflush(stdin); // cleaning input buffer (Way-1, Not recommended way)

    fgets(e.name, 20, stdin);
    return e;
}

// WAY-2
void input2(struct Employee* e)
{
    /*

    NOTE:
    Structure pointer:-
    e2 = structure
    *e = &e2
    => e points to e2 => e2 == *e
    => e2.id
         or
       (*e).id
         or
       e->id  (Official way to avoid confusion and for clean coding)
    */

    printf("Enter Id, Salary & Name of Employee:\n");
    scanf("%d", &e->id);
    scanf("%lf", &e->salary);

    // way-2
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    fgets(e->name, 20, stdin);
}

void display(struct Employee e)
{
    printf("\nEmployee Details:\n");
    printf("Id = %d\nSalary = %.2f\nName = %s\n", e.id, e.salary, e.name);
}

int main()
{
    struct Employee e1, e2;

    e1 = input1();
    display(e1);

    input2(&e2);
    display(e2);

    printf("\n");
    return 0;
}