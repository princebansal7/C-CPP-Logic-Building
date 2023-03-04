#include <stdio.h>

/*

Structure alignment:

struct s1{
    char a;
    char b;
    double c;
};

sizeof(s1) => we expect size to be 10. but internally compiler does structure alignment
              to save CPU cycles, it does it according to biggest primitive type used.

              let b represent bytes:
              then, 1 byte for char a
                    1 byte for char b, now to complete 8 bytes, rest 6 bytes remains empty.
                    8 bytes for double c

              b b - - - - - -, b b b b b b b b => 16 bytes total (2 CPU cycle of 8 byte )

              So it is recommended to declare variables either in increasing or decreasing order,
              else too much blank and waste of CPU cycles

*/

struct s1 {
    char a;
    char b;
    double c;
};

struct s2 {
    char a;
    double c;
    char b;
};

struct s3 {
    double c;
    char a;
    char b;
};

struct s4 {
    char a;
    int b;
    char c;
};

struct s5 {
    int b;
    char a;
    double c;
};

// we can explicitly tell compiler to not to do compaction using:

struct s6 {
    char b;
    char a;
    double c;
} __attribute((packed));

int main()
{
    // As size is +ve => format specifier %lu for unsigned integer

    printf("Size: %lu\n", sizeof(struct s1)); // expected: 10, actual: 16 (because takes 2 cpu cycles of 8 bytes)
    printf("Size: %lu\n", sizeof(struct s2)); // expected: 10, actual: 24 (because takes 3 cpu cycles of 8 bytes)
    printf("Size: %lu\n", sizeof(struct s3)); // expected: 10, actual: 16 (because takes 2 cpu cycles of 8 bytes)
    printf("Size: %lu\n", sizeof(struct s4)); // expected: 6, actual: 12 (because takes 3 cpu cycles of 4 bytes)
    printf("Size: %lu\n", sizeof(struct s5)); // expected: 10, actual: 16 (because takes 4 cpu cycles of 4 bytes)** (IMPORTANT)
    printf("Size: %lu\n", sizeof(struct s6)); // expected: 10, actual: 10 (No alignment => takes what we expect)
    printf("\n");
    return 0;
}