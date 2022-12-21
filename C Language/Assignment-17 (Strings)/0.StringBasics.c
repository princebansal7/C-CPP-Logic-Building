#include <stdio.h>

int main()
{
    /*
    // 1. Initialisation

    char str1[20] = { 'P', 'r', 'i', 'n', 'c', 'e' }; // Way-1
    char str2[20] = "Prince"; // constant string or string literal
    // '\0' => null character with ASCII code 0

    // 2. How to print string

    char str3[20] = "Prince";
    for (int i = 0; str3[i] != '\0'; i++)
        printf("%c", str3[i]);

    printf("\n");

    // or

    char str4[20] = "Bansal";
    printf("%s \n", str4);

*/
    // 3. How to Input string

    char str5[20];
    printf("Enter string: ");

    // scanf("%s", str5); // scanf doesn't take input after spaces or enter
    // gets(str5); // not recommended as doesn't take length

    // best way:
    //  also it takes length as input including 1 byte for null character
    fgets(str5, 20, stdin);

    printf("%s \n", str5);

    return 0;
}