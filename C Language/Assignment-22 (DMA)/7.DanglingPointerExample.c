#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p2 = NULL;

    // p1 pointer block
    {
        int* p1 = NULL;
        p1 = (int*)malloc(sizeof(int));
        *p1 = 69;
        printf("value in p1 is: %d\n", *p1);
        p2 = p1; // p2 also points to dynamcally allocated block
        free(p1); // release that block's memory
    }

    // Now p2 will become DANGLING POINTER
    // How ?
    // because p2 initially (when did p2=p1)  had valid memory address
    // but when memory got released it now didn't points to any valid memory location => dangles in between

    printf("value in p2 is: %d\n", *p2); // will result in segmentation fault (error) OS dependent

    printf("\n");
    return 0;
}