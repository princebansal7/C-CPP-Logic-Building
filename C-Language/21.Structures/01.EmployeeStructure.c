#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    double salary;
    char name[20]; // name is constant pointer => can't point to another location now => have to use strcpy() to put values
    char* address; // variable pointer so , can change to wherever we want it to point
};

int main()
{
    struct Employee e1;

    // extra gyaan

    printf("size: %lu\n\n", sizeof(e1));

    e1.id = 69;
    e1.salary = 200000.69;

    fflush(stdin); // to clean input buffer
    // e1.name = "Prince"; // error, as trying to do: constant = constant
    strcpy(e1.name, "Prince Bansal");
    e1.address = "Chandigarh, 3069"; // as variable pointer => can point to other location => no error

    // printing values
    printf("Id = %d\nSalary = %.2f\nName = %s\nAddress = %s\n", e1.id, e1.salary, e1.name, e1.address);

    printf("\n");
    return 0;
}