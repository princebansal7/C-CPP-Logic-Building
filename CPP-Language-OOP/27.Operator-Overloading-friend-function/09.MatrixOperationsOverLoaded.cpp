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

    Matrix operator+(Matrix M)
    {
        Matrix ans;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                ans.matrix[i][j] = matrix[i][j] + M.matrix[i][j];

        return ans;
    }

    Matrix operator-(Matrix M)
    {
        Matrix ans;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                ans.matrix[i][j] = matrix[i][j] - M.matrix[i][j];

        return ans;
    }
};

int main()
{
    Matrix m1;
    m1.showMatrix();
    m1.setMatrix();
    cout << "m1 Matrix:" << nl;
    m1.showMatrix();

    Matrix m2 = -m1;
    cout << "m2 Matrix:" << nl;
    m2.showMatrix();

    Matrix m3;
    m3 = m2.operator-();
    cout << "m3 Matrix:" << nl;
    m3.showMatrix();

    Matrix m4 = m3 + m1;
    cout << "m4 Matrix:" << nl;
    m4.showMatrix();

    Matrix m5 = m2 - m1;
    cout << "m5 Matrix:" << nl;
    m5.showMatrix();

    return 0;
}