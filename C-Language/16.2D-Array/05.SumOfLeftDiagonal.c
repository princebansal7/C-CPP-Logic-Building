#include <stdio.h>

// Sum of left diagonal
// [  ]NXN => (i+j== N): 1 based indexing

int mat[3][3];
int main()
{
    printf("Enter elements of Matrix (3X3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i + j == 3 - 1)
                sum += mat[i][j];
        }
    }

    printf("Sum of left diagonal is: %d", sum);

    printf("\n");
    return 0;
}
