// Author: Nirupam Pal
// Date: 07/08/2023
// Description: This program is used for matrix addition

#include<iostream>
using namespace std;

int main() {

    cout << "*-----------------------------------------*-----------------------------------------*" << endl;
    cout << "|                                 Author: Nirupam Pal                               |" << endl;
    cout << "|                                   Date: 02/08/2023                                |" << endl;
    cout << "|               Description: This program is used for matrix additions              |" << endl;
    cout << "*-----------------------------------------*---------------------------------------- *" << endl;

    // Defining the variables
    int row_a, row_b, col_a, col_b; 

    // Taking the no. of rows and columns for the matrices
    cout << "Enter the no. of rows for the first matrix : ";
    cin >> row_a;
    cout << "Enter the no. of columns for the first matrix : ";
    cin >> col_a;
    cout << "Enter the no. of rows for the second matrix : ";
    cin >> row_b;
    cout << "Enter the no. of columns for the second matrix : ";
    cin >> col_b;

    if (row_a == row_b && col_a == col_b) {
        cout <<"The matrix addition is possible." << endl;
        float a[row_a][col_a], b[row_b][col_b], ans[row_a][col_b];

        // Taking the input for the first matrix
        for (int i = 0; i < row_a; i++) {
            for (int j = 0; j < col_a; j++) {
                cout << "A[" << i+1 << "][" << j+1 << "] : ";
                cin >> a[i][j];
            }
        }
        // Taking the input for the second matrix
        for (int i = 0; i < row_b; i++) {
            for (int j = 0; j < col_b; j++) {
                cout << "B[" << i+1 << "][" << j+1 << "] : ";
                cin >> b[i][j];
            }
        }
        // Summing up the matrix
        for (int i = 0; i < row_b; i++) {
            for (int j = 0; j < col_b; j++) {
                ans[i][j] = a[i][j] + b[i][j];
            }
        }
        // Printing the output matrix
        for (int i = 0; i < row_b; i++) {
            for (int j = 0; j < col_b; j++) {
                cout << ans[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else {
        cout << "The matrix addition is not possible!" << endl;
    }
    return 0;
}
