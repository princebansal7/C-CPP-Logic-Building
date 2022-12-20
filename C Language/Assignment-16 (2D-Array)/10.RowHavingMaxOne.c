#include <stdio.h>

int mat[3][3];
int main()
{
    printf("Enter elements of Matrix (3X3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    int maxOne = 0, countOne = 0, maxRowNumber = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] == 1) {
                countOne++;
            }
        }
        if (countOne > maxOne) {
            maxOne = countOne;
            maxRowNumber = i + 1;
        }
        countOne = 0;
    }

    printf("Row %d is having maximum 1's\n", maxRowNumber);

    return 0;
}
