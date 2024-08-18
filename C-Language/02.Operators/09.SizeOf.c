#include <stdio.h>

int main()
{
    printf("Size of char: %ld\n", sizeof(char));
    printf("Size of short int: %ld\n", sizeof(short int));
    printf("Size of int: %ld\n", sizeof(int));
    printf("Size of long int: %ld\n", sizeof(long int));
    printf("Size of long long int: %ld\n", sizeof(long long int));
    printf("Size of float: %ld\n", sizeof(float));
    printf("Size of double: %ld\n", sizeof(double));
    printf("Size of long double: %ld\n\n", sizeof(long double));
    return 0;
}