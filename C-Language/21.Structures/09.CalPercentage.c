#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo, mathMarks, phyMarks, chemMarks;
    char name[20];
} s1, s2;

void input(struct Student* s)
{
    printf("Enter Roll No: ");
    scanf("%d", &s->rollNo);
    printf("\nEnter Maths marks out of 100: ");
    scanf("%d", &s->mathMarks);
    printf("Enter Physics marks out of 100: ");
    scanf("%d", &s->phyMarks);
    printf("Enter Chemistry marks out of 100: ");
    scanf("%d", &s->chemMarks);

    printf("Enter name: ");
    fflush(stdin);
    fgets(s->name, 20, stdin); // i/p: abc => fgets() take: a b c \n \0 => we can remove \n using below line:
    s->name[strlen(s->name) - 1] = '\0'; // removing \n character from fgets() input => a b c \0 \0

    printf("\n");
}
void display(struct Student s)
{
    printf("Roll number = %d\nName = %s", s.rollNo, s.name);
    printf("\nMarks:\n");
    printf("Maths: %d\n", s.mathMarks);
    printf("Physics: %d\n", s.phyMarks);
    printf("Chemistry: %d", s.chemMarks);
    printf("\n");
}

void calPercentage(struct Student s)
{
    int p = (s.chemMarks + s.mathMarks + s.phyMarks) / 3; // (marks obtained/total marks)*100
    printf("%s\'s perentage is: %d%%\n\n", s.name, p);
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

    printf("\n\nStudent details:\n\n");
    for (int i = 0; i < n; i++) {
        display(s[i]);
        calPercentage(s[i]);
    }

    printf("\n");
    return 0;
}