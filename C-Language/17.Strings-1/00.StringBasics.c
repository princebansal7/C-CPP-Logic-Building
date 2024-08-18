#include <stdio.h>

int main()
{
    /*
    // 1. Initialisation--------------

    char str1[20] = { 'P', 'r', 'i', 'n', 'c', 'e' }; // Way-1
    char str2[20] = "Prince"; // constant string or string literal
    // '\0' => null character with ASCII code 0

    // 2. How to print string----------

    char str3[20] = "Prince";
    for (int i = 0; str3[i] != '\0'; i++)
        printf("%c", str3[i]);

    printf("\n");

    // or

    char str4[20] = "Bansal";
    printf("%s \n", str4);

*/
    // 3. How to Input string--------------

    char str5[20];
    printf("Enter string: ");

    // scanf("%s", str5); // scanf doesn't take input after spaces or enter
    // gets(str5); // not recommended as doesn't take length

    // best way:
    //  also it takes length as input including 1 byte for 'line feed' or 'new line' character having ASCII 10
    //  eg: "prince" => length=6
    //       but when you take input using fgets()
    //       length will be 7 i.e, 1 byte extra for '\n' as fgets() take '\n' as input too at the end
    //  NOTE: if you take above input with scanf() => length will be 6 only
    fgets(str5, 20, stdin);

    printf("%s \n", str5);

    /*  String Memory Concept--------------------------

            // 1.Character Array (Constant pointer concept)
            //   Both str1 & str2 will point to different memory location
            //   but to can't reassign them because they are constant pointers
            char str1[20] = "Prince";
            char str2[20] = "Prince";

            printf("%u\n", str1);
            printf("%u\n", str2);

            // or

            printf("%u\n", &str1[0]);
            printf("%u\n", &str2[0]);

            // 2. Both pointer a & b will point to same memory location
            //    but we can reassign them

            char* a = "Prince";
            char* b = "Prince";
            printf("%u\n", a);
            printf("%u\n", b);

            printf("\n");

    */
    return 0;
}