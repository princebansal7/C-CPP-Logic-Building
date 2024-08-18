#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[20];
    char* address;
} s1, s2;

void display(struct Student s)
{
    printf("Roll number = %d\nName = %s\nAddress= %s", s.rollNo, s.name, s.address);
    printf("\n\n");
}

int main()
{
    // int n;
    // printf("Enter number of Students: ");
    // scanf("%d", &n);

    s1.rollNo = 69;
    strcpy(s1.name, "Prince");
    s1.address = "Chandigarh, India";

    s2 = (struct Student) { 1, "Naruto", "Konahagakure-The Hidden Leaf village" };

    struct Student s3 = { 2, "Meliodas", "Purgatory" };

    printf("\n\nStudent details:\n");
    display(s1);
    display(s2);
    display(s3);

    printf("\n");
    return 0;
}