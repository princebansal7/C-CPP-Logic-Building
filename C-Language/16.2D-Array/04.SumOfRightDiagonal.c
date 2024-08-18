#include <stdio.h>

// Trace of Matrix => Sum of right diagonal

int mat[3][3];
int main()
{
    printf("Enter elements of Matrix (3X3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    int trace = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j)
                trace += mat[i][j];
        }
    }

    printf("Trace of Matrix (Sum of right diagonal) is: %d", trace);

    printf("\n");
    return 0;
}
