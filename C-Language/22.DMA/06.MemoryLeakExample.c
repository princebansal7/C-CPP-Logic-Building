#include <stdio.h>
#include <stdlib.h>

// fun1() will do MEMORY LEAK

void fun1()
{
    int* ptr; // ptr is wild pointer (as contains invalid memory address from the start), also ptr is statically allocated
    ptr = (int*)malloc(sizeof(int)); // 4 byte memory will be allocated dynamically, and it's address will be kept in ptr

    *ptr = 69;
    printf("\nDynamically created block holds value [fun1() function]: %d\n", *ptr);

    // Now let's our function task is completed, now if we don't do:
    // free(ptr);
    // ptr (SMA) will get destroyed but dynamically allocated block (in Heap) will still remain in memory
    // but nobody can use this memory block as it's address is lost
    // THIS IS CALLED "MEMORY LEAK"

    // Two ways we can handle that:
    //      1. by freeing memory using free() before function fun1() ends. see fun2() as example
    //      2. by returing dynamically created block address (if we still need that memory block in further program)
    //          see fun3() as example
}

void fun2()
{
    int* ptr; // ptr is wild pointer (as contains invalid memory address), also ptr is statically allocated
    ptr = (int*)malloc(sizeof(int)); // 4 byte memory will be allocated dynamically, and it's address will be kept in ptr

    *ptr = 69;
    printf("\nDynamically created block holds value [fun2() function]: %d\n", *ptr);
    // .....
    // .....
    // .....
    // Now, after we use this dynamically created block and it's not needed in further program so:
    // simply release it's memory using free(), so that other things can allocate this block

    free(ptr); // now fun2() will not result in MEMORY LEAK
}

int* fun3()
{
    int* ptr; // ptr is wild pointer (as contains invalid memory address), also ptr is statically allocated
    ptr = (int*)malloc(sizeof(int)); // 4 byte memory will be allocated dynamically, and it's address will be kept in ptr

    *ptr = 69;
    printf("\nDynamically created block holds value [fun3() function]: %d\n", *ptr);
    printf("Address of Dynamically created block is [ in fun3() ]: %lu\n", ptr);
    // .....
    // .....
    // .....
    // Now, after we use this dynamically created block and it is needed in rest of the program so:
    // simply return it's address so that can use in another functions or program

    return ptr; // fun3() will not result in MEMORY LEAK (as we still have dynamically cretaed blocks address)
}

int main()
{
    fun1();
    fun2();

    int* keepingDynamicMemoryAddress = fun3();
    printf("\nAccessing Dynamically created block [ main() from fun3() ]:\n");
    printf("Value is: %d\n", *keepingDynamicMemoryAddress);
    printf("Address is: %lu\n", keepingDynamicMemoryAddress);

    printf("\n");
    return 0;
}