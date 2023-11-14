#include <iostream>
#include "Matrix.h"
#include "Vector.h"

using namespace std;

int main()
{
    // Matrix part in the main

    cout<<"\n*****************************************************\n"<<endl;

    cout << "Select the operation: \n 1) Matrix addition \n 2) Matrix multiplication \n 3) Matrix multiplication by vector" << endl;
        int n;
    cin >> n;

    switch (n)
    {
    case 1:       // Addition input
    {
        int r1, c1, r2, c2;
        cout << "Enter the number of rows of matrix: ";
        cin >> r1;
        r2 = r1;
        cout << "Enter the number of matrix columns: ";
        cin >> c1;
        c2 = c1;
        cout << "Enter elements of the 1st matrix:\n";

        Matrix mat(r1, c1);
        mat.EnterMatrix();
        cout << mat;

        cout << "Enter elements of the 2nd matrix:\n";

        Matrix mat2(r2, c2);
        mat2.EnterMatrix();
        cout << mat2;

        cout << endl;

        cout << mat + mat2;
        break;
    }
    case 2:      // input for multiplication between matrices
    {
        int r1, c1, r2, c2;
        cout << "Enter the number of rows for the 1st matrix: ";
        cin >> r1;
        cout << "Enter the number of columns for the 1st matrix: ";
        cin >> c1;

        r2 = c1;

        cout << "Enter elements of the 1st matrix:\n";

        Matrix mat(r1, c1);
        mat.EnterMatrix();
        cout << mat;

        cout << "Enter the number of rows for the 2nd matrix: " << r2 << endl;
        cout << "Enter the number of columns for the 2nd matrix: ";
        cin >> c2;

        cout << "Enter elements of the 2nd matrix:\n";

        Matrix mat2(r2, c2);
        mat2.EnterMatrix();
        cout << mat2;

        cout << endl;

        cout << mat * mat2;
        break;
    }
    case 3:        // input for multiplying a matrix by a vector
    {
        int r1, c1, r2;
        cout << "Enter the number of rows for the matrix: ";
        cin >> r1;
        cout << "Enter the number of columns for the matrix: ";
        cin >> c1;

        r2 = c1;

        cout << "Enter elements of the matrix:\n";

        Matrix mat(r1, c1);
        mat.EnterMatrix();
        cout << mat;

        cout << "Dimension of the vector: " << r2 << endl;

        cout << "Enter elements of the vector:\n";

        Matrix mat2(r2, 1);
        mat2.EnterMatrix();
        cout << mat2;

        cout << endl;

        cout << mat * mat2;
        break;
    }
    }



    // Vector part in the main

    cout<<"\n*****************************************************\n"<<endl;

   double a1[3]={3,7,-8}, a2[3]={1,7,0};
	Vector b1(3,a1), b2(3,a2);

	b1.printb();
	b2.printb();
	int c = b1*b2;
	cout<<endl<<"Scalar product: "<<c<<endl;

	b1+b2;
	b1-b2;
	b1*6;
	-b2;
	b2=b1;

	system("pause");

    return 0;
}
