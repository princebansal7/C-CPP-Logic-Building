#include <math.h>
#include <stdio.h>

// if math.h won't work in your VsCode, use -lm flag in execution command to include libm
// eg: g++ test.c -lm
//       or
//     g++ test.c -o test -lm

int main()
{
    int a, b, c;
    printf("Enter coefficients a,b & c: ");
    scanf("%d%d%d", &a, &b, &c);

    int D = b * b - 4 * a * c;

    switch (D > 0) {
    case 1:
        float root1 = (-b + sqrt(D)) / 2 * a;
        float root2 = (-b - sqrt(D)) / 2 * a;
        printf("Distinct roots are: %.2f & %.2f\n", root1, root2);
        break;
    case 0:
        switch (D == 0) {
        case 1:
            float root = -b / 2 * a;
            printf("Equal roots are: %.2f & %.2f\n", root, root);
            break;
        case 0:
            printf("roots are Imaginary\n");
            break;
        }
        break;
    }
    return 0;
}