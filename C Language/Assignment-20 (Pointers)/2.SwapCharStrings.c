#include <stdio.h>
#include <string.h>

// strcpy(str1,str2) => copies str2 data in str1

void swap(char* a, char* b)
{
    char temp[10] = "";
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int main()
{
    char str1[10], str2[10];
    printf("Enter str1 & str2:\n");
    scanf("%s %s", str1, str2);

    printf("Before Swapping:\n");
    printf("str1= \'%s\' str2= \'%s\' ", str1, str2);

    swap(str1, str2);

    printf("\nAfter Swapping:\n");
    printf("str1= \'%s\' str2= \'%s\' ", str1, str2);

    printf("\n");
    return 0;
}