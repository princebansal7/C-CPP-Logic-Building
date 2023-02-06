#include <stdio.h>
#include <string.h>
int main()
{

    char str[20] = "pcfffrince";
    char str2[20] = "prbince";
    // printf("Enter String: ");
    // fgets(str, 20, stdin);

    printf("%d", strcmp(str, str2));
    /*

    if (__STDC_VERSION__ >= 201710L)
        printf("We are using C18!\n");
    else if (__STDC_VERSION__ >= 201112L)
        printf("We are using C11!\n");
    else if (__STDC_VERSION__ >= 199901L)
        printf("We are using C99!\n");
    else
        printf("We are using C89/C90!\n");
    //-----------------------------------------------------


    // ----------------------------------------------------

           int a[] = { 1, 2, 3, 4, 5 };
           int* ptr = a;
           char* ptr1 = a; // compiler gives warning

           // why pointer variable should of same type as the type who's
           // address it's keeping

           printf("\n%d %d\n", *ptr, *ptr1); // O/P: 1 1

           ptr++; // will point to 2 (as it knows to move by 4 bytes)
           ptr1++; // will move 1 byte only so unpredictable value

           printf("%d %d\n", *ptr, *ptr1); // O/P: 2 (unpredictable value)

           // Checking size
           int* p1;
           double* p2;
           char* p3;
           float* p4;

           printf("size of \"int pointer\": %ld\n", sizeof(p1)); // 8
           printf("size of \"double pointer\": %ld\n", sizeof(p2)); // 8
           printf("size of \"char pointer\": %ld\n", sizeof(p3)); // 8
           printf("size of \"float pointer\": %ld\n", sizeof(p4)); // 8
       */
    printf("\n");
    return 0;
}