#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[20];
} s1, s2;

void input(struct Student* s)
{
    printf("Enter Roll No & Name of Student:\n");
    scanf("%d", &s->rollNo);
    fflush(stdin);
    fgets(s->name, 20, stdin);
}
void display(struct Student s)
{
    printf("Roll number = %d\nName = %s\n", s.rollNo, s.name);
    printf("\n");
}

int main()
{
    struct Student s[10];
    int n;
    printf("Enter number of Students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter Student%d details:\n", i + 1);
        input(&s[i]);
    }

    printf("\n\nStudent details:\n");
    for (int i = 0; i < n; i++)
        display(s[i]);

    printf("\n");
    return 0;
}