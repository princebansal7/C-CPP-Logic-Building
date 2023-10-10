/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Matrix {
    int matrix[3][3];

public:
    Matrix()
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                matrix[i][j] = 0;
    }

    void setMatrix()
    {
        cout << "Enter matrix (3X3) elements: " << nl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> matrix[i][j];
    }

    void showMatrix()
    {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << matrix[i][j] << " ";
            cout << nl;
        }
    }

    Matrix operator-()
    {
        Matrix ans;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                ans.matrix[i][j] = -matrix[i][j];

        return ans;
    }
};

int main()
{
    Matrix m1;
    m1.showMatrix();
    m1.setMatrix();
    Matrix m2 = -m1;
    m2.showMatrix();

    Matrix m3;
    m3 = m2.operator-();
    m3.showMatrix();
    return 0;
}