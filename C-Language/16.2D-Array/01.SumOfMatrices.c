#include <stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], sum[3][3];
    printf("\nEnter elements of Matrix1 (3X3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of Matrix2 (3X3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat2[i][j]);

    // calculating sum of matrices

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    printf("Sum of Matrix1 & Matrix2 is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}