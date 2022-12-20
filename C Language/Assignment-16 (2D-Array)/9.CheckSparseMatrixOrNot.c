#include <stdio.h>

/*

 -> Sparse Matrix:

    when less than 50% of matrix elements are non-zero => Sparse matrix
    e.g:

        0  0  1
        2  0  0  => total elements = 9
        0  0  3     non zero elements = 3 => sparse matrix

 -> Dense Matrix:

    when more than 50% of matrix elements are non-zero => Dense matrix
    e.g:

        0  5  1
        2  9  0  => total elements = 9
        0  4  3     non zero elements = 6 => Dense matrix
*/

int mat[3][3];
int main()
{
    int total_elements = 3 * 3;
    printf("Enter elements of Matrix (3X3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    int cnt = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] != 0)
                cnt++;
        }
    }

    if (cnt < total_elements)
        printf("Given Matrix is Sparse Matrix\n");
    else
        printf("Not Sparse Matrix\n");
    return 0;
}
