#include <stdio.h>

int main()
{

    int a[] = { 1, 2, 3, 4, 5 };
    int* ptr = a;
    char* ptr1 = a;

    // why pointer variable should of same type as the type who's
    // address it's keeping

    printf("\n%d %d\n", *ptr, *ptr1); // O/P: 1 1
    ptr++; // will point to 2 (as it knows to move by 4 bytes)
    ptr1++; // will move 1 byte only so unpredictable value
    printf("%d %d\n", *ptr, *ptr1); // O/P: 2 (unpredictable value)
    return 0;
}