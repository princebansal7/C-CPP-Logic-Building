#include <stdio.h>

int mat[5][5], transpose[5][5];
int main()
{
    int row, col;
    printf("\nEnter row & col of Matrix1:\n");
    scanf("%d%d", &row, &col);
    printf("Enter elements of Matrix (%dX%d):\n", row, col);
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    printf("Transpose of Matrix (%dX%d):\n", col, row);
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

/*

    void swap(int* a, int* b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    // Calculating Transpose

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (i < j)
                    swap(&mat[i][j], &mat[j][i]);
            }
        }


    // Faster way (saves cpu cycles)

    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < col; j++) {
            swap(&mat[i][j], &mat[j][i]);
        }
    }

    printf("Transpose of Matrix (%dX%d):\n", col, row);
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

*/