#include "Matrix.h"
#include <iostream>
#include <cstdlib>
#include <vector>




Matrix operator*(const Matrix& a, const Matrix& b)   // Matrix multiplication function
{

    cout << "The product of the matrices is equal to:" << endl;
    Matrix result(a.row, b.column);
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < b.column; j++)
        {
            result.matrix[i][j] = 0;
            for (int t = 0; t < b.row; t++)
            {
                result.matrix[i][j] += a.matrix[i][t] * b.matrix[t][j];
            }
        }
    }
    return result;
}

Matrix operator+(const Matrix& a, const Matrix& b)   //Matrix addition function
{
    cout << "The sum of the matrices is equal to:" << endl;
    Matrix result(a.row, a.column);
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < a.column; j++)
        {
            result.matrix[i][j] = a.matrix[i][j] + b.matrix[i][j];
        }
    }
    return result;
}

ostream& operator<<(ostream& out, const Matrix& m)     //Matrix output function
{
    for (int i = 0; i < m.row; i++)
    {
        for (int j = 0; j < m.column; j++)
            out << m.matrix[i][j] << " ";
        out << endl;
    }
    return out;
}
