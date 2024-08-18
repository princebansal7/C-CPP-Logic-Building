#include <stdio.h>

/*
Rules:

    [  ]m*n X [  ]p*q  =  [  ]m*q

    then
    1. n==p
    2. resultant matrix will be of order: m*q
    3. m,n => rows, n,q => columns
*/

int mat1[10][10], mat2[10][10], product[10][10];
int main()
{
    int r1, c1;
    printf("Enter row & col of Matrix1: ");
    scanf("%d%d", &r1, &c1);
    printf("\nEnter elements of Matrix1 (%dX%d):\n", r1, c1);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    int r2, c2;
    printf("Enter row & col of Matrix2: ");
    scanf("%d%d", &r2, &c2);
    printf("Enter elements of Matrix2 (%dX%d):\n", r2, c2);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    // calculating product of matrices

    if (c1 == r2) {
        for (int i = 0; i < r1; i++) { // traversing matrix1 rows
            for (int j = 0; j < c2; j++) { // traversing matrix2 columns
                int sum = 0;
                // for traversing rows of matrix1 & cols of matrix2

                for (int k = 0; k < r2; k++) { // k < r2 or k < c1
                    sum += mat1[i][k] * mat2[k][j];
                }
                product[i][j] = sum;
            }
        }
    }

    printf("Multiplication of Matrix1 & Matrix2 is:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}