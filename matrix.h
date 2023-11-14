#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;
#include <vector>

class Matrix
{
private:
    vector<vector<int>> matrix;
    int row;
    int column;
public:
    Matrix() : row(0), column(0) {}
    Matrix(int row, int column) : row(row), column(column)
    {
        matrix.resize(row, vector<int>(column));
    }
    void EnterMatrix()                           //Matrix input
    {
        int element;
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
            {
                cin >> element;
                matrix[i][j] = element;
            }
    }
    friend Matrix operator+(const Matrix& a, const Matrix& b);    //Matrix addition function
    friend ostream& operator<<(ostream& out, const Matrix& m);   //Matrix output function
    friend Matrix operator*(const Matrix& a, const Matrix& b);  // Matrix multiplication function
};
#endif // MATRIX_H
